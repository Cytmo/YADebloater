from pycparser import c_parser, c_ast
from pycparserext.ext_c_parser import GnuCParser
from pycparserext.ext_c_generator import GnuCGenerator
import os
import copy
import subprocess
import multiprocessing
class FuncDefVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.functions = []
        # Create a generator object as an attribute
        self.generator = GnuCGenerator()

    def visit_FuncDef(self, node):
        start_line = node.decl.coord.line
        # Convert the node to C code and store it in a string variable
        code = self.generator.visit(node)
        # Split the code by lines and get a list of strings
        lines = code.splitlines()
        # Get the length of the list and store it as the end line number of the function 
        end_line = len(lines)
        # Append the end line number to the end_lines list 

        
        name = node.decl.name
        self.functions.append({'name': name, 'start_line': start_line+1, 'end_line': start_line+end_line-2})

def remove_function(code, function_name):
    parser = GnuCParser()
    ast = parser.parse(code)

    # Traverse the AST to find the function to be removed
    class FunctionVisitor(c_ast.NodeVisitor):
        def __init__(self):
            self.found = False
            self.functions_to_remove = []

        def visit_FuncDef(self, node):
            if node.decl.name == function_name:
                self.functions_to_remove.append(node)
                self.found = True

    visitor = FunctionVisitor()
    visitor.visit(ast)

    # Remove the found function and its related statements
    for node in visitor.functions_to_remove:
        parent = node.parent
        while parent:
            if isinstance(parent, (c_ast.Compound, c_ast.For, c_ast.If, c_ast.Switch, c_ast.While)):
                parent.children.remove(node)
                break
            parent = parent.parent

    # Generate the modified code
    generator = GnuCGenerator()
    return generator.visit(ast)


def get_functions(code):
    parser = GnuCParser()
    ast = parser.parse(code)
    visitor = FuncDefVisitor()
    visitor.visit(ast)
    for func in visitor.functions:
        func['lines'] = code.splitlines()[func['start_line']-1:func['end_line']]
    return visitor.functions



def begin_to_get_functions():
    code = open('gzip-1.2.4/pp.c.debloated.c','r').read()
    functions = get_functions(code)
    return functions


def compile(source,num=-1):
    # print('Compiling')
    abspath = os.path.abspath(source)
    cmd = 'gcc -w -o gzip-1.2.4/deb_{}.out {} > /dev/null 2>&1'.format(num,abspath)
    if num==-1:
        cmd = 'gcc -w -o gzip-1.2.4/deb.out {} > /dev/null 2>&1'.format('gzip-1.2.4/pp.c.debloated.c')
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()
    return p.returncode 

def execute(cmd):
    p = subprocess.Popen(cmd, shell=True)
    try:
        p.communicate(timeout=1)
    except subprocess.TimeoutExpired:
        p.kill()
        p.communicate()
        return 1
    return p.returncode    

def run_test(src,num=0):
    file_temp = 'temp_{}.c'.format(num)
    with open(file_temp, 'w') as f:
        f.writelines(src)
    if compile(file_temp,num)!=0:
        print('Compile Failed')
        return False
    cmd1 = 'gzip-1.2.4/deb_{}.out -c < gzip-1.2.4/train/aaa.txt > output_{}'.format(num,num)  
    ret = execute(cmd1)
    cmd2 = 'diff gzip-1.2.4/standard_output output_{} > /dev/null 2>&1'.format(num)
    ret = execute(cmd2)
    os.system('rm output_{}'.format(num))
    if(ret==0):
        print('Test Passed')
        return True
    else:
        print('Test Failed')
        return False

def ddmin_execute(code, test_func):
    # Initialize the starting granularity to the size of code (coarsest granularity)
    max_length = len(code)
    granularity = max_length
    j = 3
    while len(code) > 0 and granularity >= 1:
        # Initialize the candidate to the original code
        candidate = copy.deepcopy(code)
        # Flag to indicate if the code was reduced in the current iteration
        reduced = False
        if j - 3 >= 0:
            i = j - 3
        else:
            i = 0
        while i < len(candidate):
            # Remove the code at the current index
            if i + granularity <= max_length:
                print('Removing code from line {} to line {} ... '.format(i, i + granularity))
                del candidate[i:i + granularity]              
            else:
                print('Removing code from line {} to line {} ... '.format(i, max_length))
                del candidate[i:max_length]
            # Call the test function with the reduced code
            result = test_func(candidate)
            if result:
                print('Test Passed')
                # If the test passes, update the original code and reduce granularity
                code = candidate
                reduced = True
                j = i
                if granularity > 1:
                    granularity //= 2  # Reduce granularity
                break
            # If the test fails, restore the removed code and move to the next index
            candidate = copy.deepcopy(code)
            i += 1
        # If no code was reduced in the current iteration, increase the granularity
        if not reduced:
            if granularity < len(code):
                granularity *= 2  # Increase granularity
            else:
                break
    # Return the reduced code
    return code


def ddmin_function_level(code, test_func, function_list,num):
    # Initialize the starting granularity to 1 (line by line)
    granularity = 1
    # Initialize the candidate to the original code
    candidate = copy.deepcopy(code)
    while len(function_list) > 0 and granularity <= len(code):
        # Flag to indicate if the code was reduced in the current iteration
        reduced = False
        for func in function_list:
            # Keep track of the smallest set of lines for the function
            smallest_set = None
            smallest_size = float('inf')
            candidate = copy.deepcopy(code)
            for i in range(func['start_line']+1, func['end_line'] , granularity):
                # Remove the code at the current index
                print('Removing code from line {} to line {} in function {} content is... {}'.format(i, i+granularity-1, func['name'],candidate[i-1:i+granularity-1]))
                for k in range(i-1,i+granularity-1):
                    candidate[k] = '\n'
                # Call the test function with the reduced code
                result = test_func(candidate,num)
                if result:
                    print('Test Passed')
                    # If the test passes, update the original code and reduce granularity
                    code = copy.deepcopy(candidate)
                    reduced = True
                    # Update the smallest set of lines for the function
                    if smallest_set is None or len(range(func['start_line'], i+granularity)) < smallest_size:
                        smallest_set = list(range(func['start_line'], i+granularity))
                        smallest_size = len(smallest_set)
                else:
                    print("Test failed, restoring code at line {}, content is {}".format(i, code[i-1:i+granularity-1]))
                    # If the test fails, restore the removed code and move to the next index
                    candidate = copy.deepcopy(code)

            # If the function code was reduced in the current iteration, update its smallest set of lines
            if smallest_set is not None:
                func['lines'] = smallest_set

        # If no code was reduced in the current iteration, increase the granularity
        if not reduced:
            if granularity < len(code):
                granularity = min(len(code), granularity*2)
            else:
                break

    # Remove the reduced lines from the original code
    for func in function_list:
        if 'lines' in func:
            print('Removing function {}...'.format(func['name']))
            del code[func['lines'][0]:func['lines'][-1]+1]

    return code




def run_ddmin_function_level(part_func_list, code, test_func,num):
    # Run ddmin_function_level on the part of function list
    reduced_code = ddmin_function_level(code, test_func,part_func_list,num)
    return reduced_code

def ddmin_function_level_multiprocess(code, test_func, func_list, n=4):
    # Divide the function list into n parts

    num_parts = n
    parts = divide_list(function_list, num_parts)

    # Create a multiprocessing pool with n processes
    pool = multiprocessing.Pool(processes=n)

    # Run ddmin_function_level on each part of function list in parallel
    results = []
    num = 0
    for part in parts:
        results.append(pool.apply_async(run_ddmin_function_level,kwds=\
        {"code": code,"test_func":test_func,"part_func_list":part,'num':num}))
        num += 1

    # Get the reduced code from each process
    reduced_codes = [result.get() for result in results]

    # Close the pool
    pool.close()
    pool.join()

    # Merge the reduced code from each process
    # reduced_code = ''.join(reduced_codes)

    return 'das'







# Test the delta debugging algorithm
if(run_test(open('gzip-1.2.4/pp.c.debloated.c','r').readlines())):
    print('Test Passed On First Run')
else:
    print('Test Failed On First Run')
    exit(0)


code = open('gzip-1.2.4/pp.c.debloated.c','r').read()
function_list = begin_to_get_functions()
# new_code = remove_function(code, "abort_gzip")
# print(function_list)


reduced_code= ddmin_function_level_multiprocess(open('gzip-1.2.4/pp.c.debloated.c','r').readlines(),run_test,function_list)
with open('reduced.c', 'w') as f:
    f.writelines(reduced_code)