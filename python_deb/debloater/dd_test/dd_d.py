from pycparser import c_parser, c_ast
from pycparserext.ext_c_parser import GnuCParser
from pycparserext.ext_c_generator import GnuCGenerator
import os
import copy
import subprocess
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
        self.functions.append({'name': name, 'start_line': start_line+2, 'end_line': start_line+end_line-3})

def get_functions(code):
    parser = GnuCParser()
    ast = parser.parse(code)
    visitor = FuncDefVisitor()
    visitor.visit(ast)
    return visitor.functions



def begin():
    code = open('gzip-1.2.4/pp.c','r').read()
    functions = get_functions(code)
    print(functions)


def compile(source):
    # print('Compiling')
    abspath = os.path.abspath(source)
    cmd = 'gcc -w -o gzip-1.2.4/deb.out ' + abspath + ' > /dev/null 2>&1'
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

def run_test(src):
    with open('temp.c', 'w') as f:
        f.writelines(src)
    if compile('temp.c')!=0:
        # print('Compile Failed')
        return False
    cmd1 = 'gzip-1.2.4/deb.out -c < gzip-1.2.4/train/aaa.txt > output'
    ret = execute(cmd1)
    cmd2 = 'diff gzip-1.2.4/standard_output output > /dev/null 2>&1'
    ret = execute(cmd2)
    os.system('rm output')
    if(ret==0):
        # print('Test Passed')
        return True
    else:
        # print('Test Failed')
        return False

def ddmin_execute(code,test_func):
    # Initialize the starting granularity to 1 (line by line)
    granularity = 1
    j=10
    while len(code) > 0 and granularity <= len(code):
        
        # Initialize the candidate to the original code
        candidate = copy.deepcopy(code)
        # Flag to indicate if the code was reduced in the current iteration
        reduced = False
        if j-3 >=0:
            i = j-3
        else :
            i=0
        while i < len(candidate):
            # Remove the code at the current index
            print('Removing code from line {} to line {} ... '.format(i,i+granularity))
            del candidate[i:i+granularity]
            # Call the test function with the reduced code
            result = test_func(candidate)
            if result:
                print('Test Passed')
                # If the test passes, update the original code and reduce granularity
                code = candidate
                reduced = True
                j=i
                if granularity > 1:
                    granularity = max(1, granularity//2)
                break
                
            # If the test fails, restore the removed code and move to the next index
            candidate = copy.deepcopy(code)
            i += 1

        # If no code was reduced in the current iteration, increase the granularity
        if not reduced:
            if granularity < len(code):
                granularity = min(len(code), granularity*2)
            else:
                break

    return code

# Test the delta debugging algorithm
if(run_test(open('gzip-1.2.4/pp.c','r').readlines())):
    print('Test Passed On First Run')
else:
    print('Test Failed On First Run')
    exit(0)



reduced_code= ddmin_execute(open('gzip-1.2.4/pp.c.debloated.c','r').readlines(),run_test)
with open('reduced.c', 'w') as f:
    f.writelines(reduced_code)