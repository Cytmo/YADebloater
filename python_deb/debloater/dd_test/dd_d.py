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
    code = open('temp/pp.c.debloated.c','r').read()
    functions = get_functions(code)
    return functions


def compile(source,num=-1):
    # print('Compiling')
    abspath = os.path.abspath(source)
    cmd = 'gcc -w -o temp/deb_{}.out {} > /dev/null 2>&1'.format(num,abspath)
    if num==-1:
        cmd = 'gcc -w -o temp/deb.out {} > /dev/null 2>&1'.format('temp/pp.c.debloated.c')
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()
    return p.returncode 

def execute(cmd):
    # print('Executing {}'.format(cmd))
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
    else:
        pass
        # os.system('rm {}'.format(file_temp))


    '''Put ur test code here'''

    output_file = 'output_{}'.format(num)

    cmds = []
    current_work_dir = 'temp'
    BIN = 'temp/deb_{}.out'.format(num)
    # $BIN '[d]*' '&@t& lkj[0-9]&' < $INDIR/moni/rr19.t &>> $OUTDIR/o0
    cmd0 = "{} '[d]*' '&@t& lkj[0-9]&' < {}/train/moni/rr19.t >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '@h' 'w0Yj|`l`AYgv{M<#KAouk' < $INDIR/input/ruin.1035 &>> $OUTDIR/o1    
    cmd1 = "{} '@h' 'w0Yj|`l`AYgv{{M<#KAouk' < {}/train/input/ruin.1035 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '@**?' 'b@t' < $INDIR/temp-test/2179.inp.922.1 &>> $OUTDIR/o2
    cmd2 = "{} '@**?' 'b@t' < {}/train/temp-test/2179.inp.922.1 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '?[^9-B]' 'a@n' < $INDIR/temp-test/282.inp.126.2 &>> $OUTDIR/o3
    cmd3 = "{} '?[^9-B]' 'a@n' < {}/train/temp-test/282.inp.126.2 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '-[^-z]' '&a@%' < $INDIR/temp-test/768.inp.329.1 &>> $OUTDIR/o4
    cmd4 = "{} '-[^-z]' '&a@%' < {}/train/temp-test/768.inp.329.1 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN 'x' 'vif#21aJuxd&,I1PPnf{b,On|j&db8)b<`\|' < $INDIR/input/ruin.334 &>> $OUTDIR/o5
    cmd5 = "{} 'x' 'vif#21aJuxd&,I1PPnf{{b,On|j&db8)b<`\|' < {}/train/input/ruin.334 >> {}".format(BIN, current_work_dir, output_file)
    #  $BIN '%yw,0+8@n' 'a&`' < $INDIR/input/ruin.1158 &>> $OUTDIR/o6
    cmd6 = "{} '%yw,0+8@n' 'a&`' < {}/train/input/ruin.1158 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '%?[@@][^0-9][a-c]?-[^0-9]- [^9-B]$' 'NEW' < $INDIR/temp-test/1129.inp.485.10 &>> $OUTDIR/o7
    cmd7 = "{} '%?[@@][^0-9][a-c]?-[^0-9]- [^9-B]$' 'NEW' < {}/train/temp-test/1129.inp.485.10 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '-?@@*[_-z][^0-9]' '&' < $INDIR/temp-test/821.inp.354.1 &>> $OUTDIR/o8
    cmd8 = "{} '-?@@*[_-z][^0-9]' '&' < {}/train/temp-test/821.inp.354.1 >> {}".format(BIN, current_work_dir, output_file)
    # $BIN '[^9-B][^]@[**' 'a' < $INDIR/moni/f7.inp &>> $OUTDIR/o9
    cmd9 = "{} '[^9-B][^]@[**' 'a' < {}/train/moni/f7.inp >> {}".format(BIN, current_work_dir, output_file)
    
    cmds.append(cmd0)
    cmds.append(cmd1)
    cmds.append(cmd2)
    cmds.append(cmd3)
    cmds.append(cmd4)
    cmds.append(cmd5)
    cmds.append(cmd6)
    cmds.append(cmd7)
    cmds.append(cmd8)
    cmds.append(cmd9)
    
    for cmd in cmds:
        execute(cmd)


    '''    cmd1 = 'temp/deb_{}.out -c < temp/train/aaa.txt > output_{}'.format(num,num)  
    ret = execute(cmd1)'''
    cmd2 = 'diff temp/standard_output output_{} > /dev/null 2>&1'.format(num)
    ret = execute(cmd2)
    os.system('rm output_{}'.format(num))
    os.system('rm temp/deb_{}.out'.format(num))
    os.system('rm output')
    if(ret==0):
        print('Test Passed')
        return True
    else:
        print('Test Failed')
        return False

def ddmin_execute(code, test_func, line_list):
    # Initialize the starting granularity to the size of code (coarsest granularity)
    max_length = len(code)
    granularity = 1
    while len(code) > 0 and granularity >= 1:
        # Initialize the candidate to the original code
        candidate = copy.deepcopy(code)
        # Flag to indicate if the code was reduced in the current iteration
        reduced = False
        i = 0

        while i < len(candidate):
            if not i in line_list:
                i+=1
            deleted = False
            # Remove the code at the current index if it is in the line list
            if i + granularity <= max_length:
                    print('Removing code from line {} to line {} ... '.format(i, i + granularity))
                    # delete only the lines in line_list
                    for j in range(i,i + granularity):
                        if j in line_list:
                            print('deleted {}'.format(candidate[j]))
                            del candidate[j]
                            deleted = True

                    line_list = [x - granularity if x >= i + granularity else x for x in line_list]
            else:
                    print('Removing code from line {} to line {} ... '.format(i, max_length))
                    for j in range(i,i + granularity):
                        if j in line_list:
                            print('deleted {}'.format(candidate[j]))
                            del candidate[j]
                            deleted = True
                    line_list = [x - (max_length - i) if x >= max_length else x for x in line_list]
            # Call the test function with the reduced code
            if deleted and test_func(candidate):
                print('Test Passed')
                # If the test passes, update the original code and reduce granularity
                code = copy.deepcopy(candidate)
                reduced = True
                if granularity > 1:
                    
                    granularity //= 2  # Reduce granularity
                    print('decrease granularity to {}'.format(granularity))
                break
            # If the test fails, restore the removed code and move to the next index
            print('Restored line {}'.format(i))
            candidate = copy.deepcopy(code)
            i += 1
        # If no code was reduced in the current iteration, decrease the granularity
        if not reduced:
            if granularity < len(line_list):
                
                granularity *= 2  # Increase granularity
                print('increase granularity to {}'.format(granularity))            

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
                print('Removing code from line {} to line {} in function {} '.format(i, i+granularity-1, func['name']))
                skip_indicator = ''
                for k in range(i-1,i+granularity-1):
                    skip_indicator += candidate[k]
                    candidate[k] = '\n'
                    print('Skipped')
                # Call the test function with the reduced code
                if skip_indicator.strip().replace('}','').replace('{','').replace(';','') == '':
                    print('Skipped')                    
                    continue
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

    return [code,function_list]


def divide_list(lst, n):
    """Divide a list into n parts with the first method of part1:[0,n,2n...]"""
    division = len(lst) / n
    return [lst[round(division * i):round(division * (i + 1))] for i in range(n)]

def run_ddmin_function_level(part_func_list, code, test_func,num):
    # Run ddmin_function_level on the part of function list
    reduced_code = ddmin_function_level(code, test_func,part_func_list,num)
    return reduced_code

def ddmin_function_level_multiprocess(code, test_func, func_list, n=1):
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


    # Close the pool
    pool.close()
    pool.join()

    print (results)
    with open('temp/pp.c.debloated.c','r+') as f:
        for item in results:
            # item looks like [code,function_list]
            for func in item[1]:
                # extract the function in function_list and overwrite the original function
                function_to_write = item[0][func['lines'][0]:func['lines'][-1]+1]
                f.seek(func['start_line'])
                f.writelines(function_to_write)

    # Merge the reduced code from each process
    # reduced_code = ''.join(reduced_codes)




    return 'das'







# Test the delta debugging algorithm
if(run_test(open('temp/pp.c.debloated.c','r').readlines())):
    print('Test Passed On First Run')
else:
    print('Test Failed On First Run')
    exit(0)


def extract_other_lines(src, func_list):
    length = len(src)
    other_lines = []
    # iterate through the lines of the code
    for line_num in range(0, length):
        other_lines.append(line_num)
    for func in func_list:
        # iterate through the lines of the function
        for line_num in range(func['start_line']-2, func['end_line']):
            # remove the line number of the function from the list of all line numbers
            if line_num in other_lines:
                other_lines.remove(line_num)

    # now we get other lines' number, we should remove blank lines from it
    for line in other_lines:
        # print('line number is '+str(line)+', content is '+src[line].strip())
        if src[line].strip() == '':
            other_lines.remove(line)
    return other_lines
    


code = open('temp/pp.c.debloated.c','r').read()
function_list = begin_to_get_functions()
other_lines = extract_other_lines(open('temp/pp.c.debloated.c','r').readlines(), function_list)
reduced_code = ddmin_execute(open('temp/pp.c.debloated.c','r').readlines(), run_test, other_lines)
with open('temp/pp.c.debloated.c','w') as f:
    f.writelines(reduced_code)
input('Press Enter to continue...')
# print(function_list)
# new_code = remove_function(code, "abort_gzip")
# print(function_list)
function_list = begin_to_get_functions()
reduced_code= ddmin_function_level_multiprocess(open('temp/pp.c.debloated.c','r').readlines(),run_test,function_list,1)
with open('reduced.c', 'w') as f:
    f.writelines(reduced_code)