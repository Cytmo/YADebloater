from functools import lru_cache
import hashlib
from pycparser import c_parser, c_ast
from pycparserext.ext_c_parser import GnuCParser
from pycparserext.ext_c_generator import GnuCGenerator
import os
import security_ops
import copy
import subprocess
import multiprocessing
import utils
from tqdm import tqdm
import time
import cProfile
import pstats
from io import StringIO
def profile(func, *args, **kwargs):
    pr = cProfile.Profile()
    pr.enable()
    result = func(*args, **kwargs)
    pr.disable()
    s = StringIO()
    sortby = "cumulative"
    ps = pstats.Stats(pr, stream=s).sort_stats(sortby)
    ps.print_stats()
    print(s.getvalue())
    return result
# init logger
logger = utils.GetLog().get_log()

lines_removed = 0




label_lines = []

def get_labels(input_file):
    global label_lines
    label_lines = []
    # read input file
    with open(input_file, 'r') as f:
        input_text = f.read()
        # parse the C code into an AST
    parser = GnuCParser()
    ast = parser.parse(input_text)

    # use the visitor to modify labels
    label_visitor = LabelVisitor()
    label_visitor.visit(ast)
    
def process_labels(input_file):
    global label_lines
    # generate modified C code from the AST
    if len(label_lines) == 0:
        return
    with open(input_file, 'r') as f:
       lines = f.readlines()
       for line in label_lines:
            logger.debug("Adding semicolon to label at line {}, content: {}".format(line, lines[line-1]))
            if lines[line].strip() == ';':
                logger.debug("Semicolon already exists, skip")
                continue
            else:
                lines[line-1] = lines[line-1].replace('\n','') + ';\n'
       with open(input_file,'w') as f:
           f.writelines(lines)

# define a visitor class to modify labels
class LabelVisitor(c_ast.NodeVisitor):
    def visit_Label(self, node):
        # add a semicolon to the end of the label
        global label_lines
        label_lines.append(node.coord.line)

class FuncListVisitor(c_ast.NodeVisitor):
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
        self.functions.append(
            {
                "name": name,
                "start_line": start_line + 1,
                "end_line": start_line + end_line - 2,
            }
        )


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
            if isinstance(
                parent, (c_ast.Compound, c_ast.For, c_ast.If, c_ast.Switch, c_ast.While)
            ):
                parent.children.remove(node)
                break
            parent = parent.parent

    # Generate the modified code
    generator = GnuCGenerator()
    return generator.visit(ast)


def get_functions(code):
    parser = GnuCParser()
    ast = parser.parse(code)
    visitor = FuncListVisitor()
    visitor.visit(ast)
    # for func in visitor.functions:
    #     func["lines"] = code.splitlines()[func["start_line"] - 1 : func["end_line"]]
    return visitor.functions


def begin_to_get_functions():
    with open("temp/pp.c.debloated.c", "r") as f:
        code = f.read()
    functions = get_functions(code)
    return functions


def compile(source, num=-1):
    # logger.info('Compiling')
    abspath = os.path.abspath(source)
    # ["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage","-D __msan_unpoison(s,z)","-lpcre"])    

    cmd = "gcc -w -lpcre  -D '__msan_unpoison(s,z)' -o temp/deb_{}.out {} > /dev/null 2>&1".format(num, abspath)
    # cmd = "gcc -w -o temp/deb_{}.out {} > /dev/null 2>&1".format(num, abspath)
    if num == -1:
        cmd = "gcc -w -o temp/deb.out {} > /dev/null 2>&1".format(
            "temp/pp.c.debloated.c"
        )
    p = os.system(cmd)
    return p


def execute(cmd):
    # logger.info(cmd)
    # logger.info('Executing {}'.format(cmd))
    p = os.system("timeout -s SIGKILL 1 {}".format(cmd))
    # try:
    #     p.communicate(timeout=0.2)
    # except subprocess.TimeoutExpired:
    #     p.kill()
    #     p.communicate()
    #     return 1
    return p

def verifier(src, num=0, run_tests=False):
    file_temp = "temp/temp_{}.c".format(num)
    with open(file_temp, "w") as f:
        f.writelines(src)
    if compile(file_temp, num) != 0:
        logger.debug("Compile Failed")
        return False
        # os.system('rm {}'.format(file_temp))
    if run_tests:
        dir_name = "temp"
        cmd = "python3 %s/run.py dd_verify %d" % (dir_name, num)
        ret = os.system("{}".format(cmd))
        if ret == 0:
            logger.debug("Test Passed")
            return True
        else:
            logger.debug("Test Failed")
            return False
    else:
        return True




def ddmin_execute(code, test_func, line_list):
    # add a test_cache to reduce the unnecessary exec of same reduced functions
    cache = {}
    # logger.info("line list is "+str(line_list))
    # Initialize the starting granularity to the size of code (coarsest granularity)
    max_length = len(code)
    original_length = len(line_list)
    granularity = 1
    last_reduced_line = 0
    with tqdm(total=max_length,desc='Reducing...' ) as pbar:  # initialize tqdm progress bar
        while len(code) > 0 and granularity >= 1:
            # Initialize the candidate to the original code
            candidate = copy.deepcopy(code)
            line_list_reduced = copy.deepcopy(line_list)
            # Flag to indicate if the code was reduced in the current iteration
            reduced = False

            if last_reduced_line > 0:
                i = last_reduced_line
                pbar.update(last_reduced_line - pbar.n)
            else:
                i = 0

            while i < len(candidate):
                removed_code = []
                if not i in line_list:
                    i += 1
                    pbar.update(1)
                    continue
                deleted = False
                # Remove the code at the current index if it is in the line list
                logger.debug(
                        "Removing code from line {} to line {} ... ".format(
                            i, max_length
                        )
                    )
                for j in range(i, min(i + granularity, max_length)):
                    if j in line_list:
                    # if j in line_list and candidate[j].strip() not in ("", "{", "}", ";"):
                        removed_code.append(candidate[j])
                        logger.debug("deleted {}".format(candidate[j]))
                        candidate[j] = "\n"
                        line_list_reduced.remove(j)


                line_list_str = ''.join(str(line_list_reduced))
                cache_key = hashlib.md5(line_list_str.encode('utf-8')).hexdigest()
                if cache_key in cache:
                    test_result = cache[cache_key]
                    logger.debug('Already have result in cache, skip the test')
                else:
                    test_result = test_func(candidate,run_tests=True)
                    cache[cache_key] = test_result

                # line_list = [x - (max_length - i) if x >= max_length else x for x in line_list]
                # Call the test function with the reduced code
                if removed_code and test_result:                    # write_to_file(removed_code,True)
                    # If the test passes, update the original code and reduce granularity
                    code = copy.deepcopy(candidate)
                    reduced = True
                    last_reduced_line = i
                    line_list = copy.deepcopy(line_list_reduced)
                    # if granularity > 1:
                    #     granularity //= 2  # Reduce granularity
                    #     logger.info('decrease granularity to {}'.format(granularity))
                    # fixme
                    # write_to_file(code,True)
                    break
                # write_to_file(code,False)
                # If the test fails, restore the removed code and move to the next index
                if i in line_list:
                    logger.debug("Restored line {}".format(i))
                # write_to_file(removed_code,False)
                candidate = copy.deepcopy(code)
                line_list_reduced = copy.deepcopy(line_list)

                i += 1
                # If no code was reduced in the current iteration, decrease the granularity
                pbar.update(1)
            if reduced:
                if granularity < 8:
                    granularity *= 2  # Increase granularity
                    logger.debug("increase granularity to {}".format(granularity))
            else:
                if granularity > 1:
                    granularity //= 2  # Reduce granularity
                    logger.debug("decrease granularity to {}".format(granularity))
                else:
                    break
    logger.info('Removed {} lines'.format(original_length - len(line_list)))
    # set if_removed
    global lines_removed
    lines_removed = original_length - len(line_list)

        # Return the reduced code
    # output the smallest_code for debug use

    return code


def write_to_file(removed_code, result, file_path="dataset.txt"):
    """
    Writes the removed code and test result to a labeled dataset file.

    Parameters:
        removed_code (str): The code subaggregate that was removed.
        result (bool): The test result (True for passed, False for failed).
        file_path (str): The path to the output file.

    Returns:
        None
    """

    if not removed_code == []:
        with open(file_path, "a") as f:
            label = 1 if result else 0
            f.write(f"{label}\t{removed_code}\n")


# def get_filename(code_subaggregate):
#     """
#     Generate a filename for a C code sub-aggregate based on its MD5 hash.

#     Args:
#         code_subaggregate (str): A C code sub-aggregate.

#     Returns:
#         str: A filename based on the MD5 hash of the code sub-aggregate.
#     """
#     # Compute the MD5 hash of the code sub-aggregate
#     md5_hash = hashlib.md5(code_subaggregate.encode()).hexdigest()
#     # Generate a filename based on the hash
#     filename = f"{md5_hash}.c"
#     return filename


# # write mid-procecss code and their results to a file for machine learning
# def write_to_file(code,result):
#     file_name = get_filename(code)
#     with open('dataset/'+file_name,'w') as f:
#         f.writelines(code)
#     write_file(file_name,result)


# def write_file(code_subaggregates, test_results, filename):
#     """
#     Write C code sub-aggregates and their corresponding test results to a labeled dataset file.

#     Args:
#         code_subaggregates (list): A list of C code sub-aggregates.
#         test_results (list): A list of corresponding test results (0 for fail, 1 for pass).
#         filename (str): The name of the file to write to.
#     """
#     with open('dataset/'+filename, 'w') as f:
#         f.write('code_subaggregate,test_result\n')
#         for code, result in zip(code_subaggregates, test_results):
#             # Escape any commas in the code sub-aggregate to avoid parsing issues
#             code = code.replace(',', '\\,')
#             f.write(f'{code},{result}\n')


def ddmin_function_level(code, test_func, function_list, num):
    # Sort functions by their complexity (number of lines)
    total_removed = 0
    # Initialize the starting granularity to 1 (line by line)
    # Initialize the candidate to the original code
    candidate = copy.deepcopy(code)
    # keep track of each function's smaller set for multiprocessing
    smallest_set = {}
    # add a test_cache to reduce the unnecessary exec of same reduced functions
    test_cache={}
    for func in function_list:
        smallest_set.update({func['name']: None})
    # Flag to indicate if the code was reduced in the current iteration
    for func in tqdm(function_list, position=1,desc="Reducing functions...",):
        reduced = False
        cnt = 0
        granularity = 1
        max_length = func["end_line"] + 1 - func["start_line"] - 2
        code_length = len(code)

        while True:
            candidate = copy.deepcopy(code)
            desc = "Reducing {} (gran {} iter {})...".format(func['name'], granularity,cnt)
            with tqdm(total=max_length, desc=desc, position=2,leave=False) as pbar:
                logger.debug(
                    "removing function {} ...granularity is {}".format(
                        func["name"], granularity
                    )
                )
                cnt += 1
                for i in range(func["start_line"] + 1, func["end_line"]):
                    pbar.update(1)
                    # Remove the code at the current index
                    logger.debug(
                        "Removing code from line {} to line {} in function {} ".format(
                            i, i + granularity - 1, func["name"]
                        )
                    )
                    
                    skip_indicator = ""
                    # make sure i+granularity is not out of range
                    if i + granularity > func["end_line"]:
                        skip_indicator = ""
                        for k in range(i - 1, min(max_length, func["end_line"])):
                            try:
                                skip_indicator += candidate[k]
                                candidate[k] = "\n"
                            except IndexError:
                                os._exit()
                            # logger.error('Skipped')
                    else:
                        skip_indicator = ""
                        for k in range(i - 1, i + granularity - 1):
                            try:
                                skip_indicator += candidate[k]
                                candidate[k] = "\n"
                            except IndexError:
                                os._exit()
                            # logger.info('Skipped')
                    # Call the test function with the reduced code
                    logger.debug(
                        "Removing code from line {} to line {} in function {} ".format(
                            i, i + granularity - 1, func["name"]
                        )
                    )

                    if (
                        not check_brackets_balance(skip_indicator) or skip_indicator.strip()
                            # .replace(";", "")
                            == "" 
                    ):
                        logger.debug("Skipped")
                        continue
                    # get the reduced version of the function to check if it is syntaxly correct or not
                    # to save the time to compile whole file


                    candidate_func_code = ''.join(candidate[func["start_line"]-2:func["end_line"]])

                    candidate_func_code_no_blank_lines = ''.join(line for line in candidate_func_code.splitlines(True) if line.strip())
                    cache_key = candidate_func_code_no_blank_lines
                    if cache_key in test_cache:
                        result = test_cache[cache_key]
                        logger.debug('Already have result in cache, skip the test')
                    else:
                        # get the reduced version of the function to check if it is syntaxly correct or not
                        # to save the time to compile whole file
                        # logger.debug(candidate_func_code)
                        if True:
                            # logger.debug('Syntax correct, run the test')
                            result = test_func(candidate, num,run_tests=True)
                        else:
                            logger.debug('Syntax error, skip the test')

                            result = False
                        test_cache[cache_key] = result
                    if result:
                        # If the test passes, update the original code and reduce granularity
                        code = copy.deepcopy(candidate)
                        total_removed += 1
                        reduced = True
                        # Update the smallest set of lines for the function
                        """"Temporarily disable the smallest code generation """    
                        # new_smallest_func = []
                        # for i in range(func["start_line"] + 1, func["end_line"]):
                        #     if code[i] != "\n":
                        #         new_smallest_func.append(candidate[i])
                        # smallest_set[func['name']] = new_smallest_func


                    else:
                        logger.debug(
                            "Test failed, restoring code at line {}, content is {}".format(
                                i, code[i - 1 : i + granularity - 1]
                            )
                        )
                        # If the test fails, restore the removed code and move to the next index
                        candidate = copy.deepcopy(code)
                    # If no code was reduced in the current iteration, increase the granularity
                if reduced:

                    if granularity <= 8:
                    # if granularity < max_length:
                        granularity = min(max_length, granularity * 2)
                        logger.debug("increase granularity to {}".format(granularity))
                        reduced = False
                    else:
                        break
                elif granularity == 1 and not reduced:
                    break
                else:
                    granularity = 1
                    logger.debug(
                        "No code is reduced during last iteration, granularity is now {}".format(
                            granularity
                        )
                    )
        # Clear the cache for the current function before moving to the next one
        test_cache.clear()
        # If the function code was reduced in the current iteration, update its smallest set of lines
        # if smallest_set is not None:
        #     func['lines'] = smallest_set

    # If no code was reduced in the current iteration, increase the granularity
    # if not reduced:
    #     if granularity < len(code):
    #         granularity = min(len(code), granularity*2)
    #         logger.info('increase granularity to {}'.format(granularity))
    #     else:
    #         break

    # # Remove the reduced lines from the original code
    # for func in function_list:
    #     if 'lines' in func:
    #         logger.info('Removing function {}...'.format(func['name']))
    #         del code[func['lines'][0]:func['lines'][-1]+1]
    # Return the reduced code
    logger.info("Total removed {} lines".format(total_removed))
    # with open("temp/reduced_code.c", "w") as f:
    #     f.writelines(code)
    global lines_removed
    lines_removed += total_removed


    with open("temp/pp.c.debloated.c", 'w') as f:
        f.writelines(code)




    """"Temporarily disable the smallest code generation """    
    # with open('smallest_code', 'w') as f:
    #     f.write(str(smallest_set))
    #     f.write(str(function_list))


    return [code, function_list]


def check_syntax(code):
    return True
    # """Check if the code is syntaxly correct"""
    # parser = GnuCParser()
    # try:
    #     parser.parse(code)
    #     return True
    # except Exception as e:
    #     logger.debug(e)
    #     return False

def check_brackets_balance(s):
    count = 0
    for char in s:
        if char == '{':
            count += 1
        elif char == '}':
            count -= 1
            if count < 0:
                return False
    if count == 0:
        return True
    else :
        logger.debug('Brackets not balanced')
        return False

def divide_list(lst, n):
    """Divide a list into n parts with the first method of part1:[0,n,2n...]"""
    division = len(lst) / n
    return [lst[round(division * i) : round(division * (i + 1))] for i in range(n)]


def run_ddmin_function_level(part_func_list, code, test_func, num):
    # Run ddmin_function_level on the part of function list
    reduced_code = ddmin_function_level(code, test_func, part_func_list, num)
    return reduced_code


def ddmin_function_level_multiprocess(code, test_func, function_list, n=1):
    # Divide the function list into n parts

    num_parts = n
    parts = divide_list(function_list, num_parts)

    # Create a multiprocessing pool with n processes
    pool = multiprocessing.Pool(processes=n)

    # Run ddmin_function_level on each part of function list in parallel
    results = []
    num = 0
    for part in parts:
        results.append(
            pool.apply_async(
                run_ddmin_function_level,
                kwds={
                    "code": code,
                    "test_func": test_func,
                    "part_func_list": part,
                    "num": num,
                },
            )
        )
        num += 1

    # Close the pool
    pool.close()
    pool.join()

    # with open('temp/pp.c.debloated.c','r+') as f:
    #     for item in results:
    #         # item looks like [code,function_list]
    #         for func in item[1]:
    #             # extract the function in function_list and overwrite the original function
    #             function_to_write = item[0][func['lines'][0]:func['lines'][-1]+1]
    #             f.seek(func['start_line'])
    #             f.writelines(function_to_write)

    # Merge the reduced code from each process
    # reduced_code = ''.join(reduced_codes)

    return "das"


def extract_other_lines(src, func_list):
    length = len(src)
    other_lines = []
    # logger.info("function list is {}".format(func_list))
    # iterate through the lines of the code
    for line_num in range(0, length):
        other_lines.append(line_num)
    for func in func_list:
        # iterate through the lines of the function
        for line_num in range(func["start_line"] - 1, func["end_line"]+1):
            # remove the line number of the function from the list of all line numbers

            if line_num in other_lines:
                # logger.info("Removed line {} from line list".format(line_num))
                other_lines.remove(line_num)

    # now we get other lines' number, we should remove blank lines from it
    for line in other_lines:
        # logger.info('line number is '+str(line)+', content is '+src[line].strip())
        if src[line].strip() == "":
            other_lines.remove(line)
    return other_lines


def reorder_function_list(function_list, function_execute_count):
    # Sort the function list by execution count
    function_list = sorted(function_list, key=lambda func: int(function_execute_count.get(func["name"], 0)), reverse=True)

    # Sort functions with the same execution count by code length
    function_list = sorted(function_list, key=lambda func: func["end_line"] - func["start_line"])

    return function_list






def run_dd(deleted_functions=[],function_execution_count={},iter=False):
    global total_removed
    total_removed = 0

    # Rewrite the code to get correct line numbers
    with open("temp/pp.c.debloated.c", "r") as f:
        code = f.read()
    p = GnuCParser()
    ast = p.parse(code)
    lines = GnuCGenerator().visit(ast)
    logger.info("Rewriting file...")   
    with open('temp/pp.c.debloated.c','w') as f:
        f.write(lines)


    with open("temp/pp.c.debloated.c", "r") as f:
        code = f.read()
    with open("temp/pp.c.debloated.c", "r") as f:
        code_lines = f.readlines()
    # first run
    if verifier(code_lines):
        logger.info("Test Passed On First Run")
    else:
        logger.info("Test Failed On First Run")
        exit(0)
    function_list = begin_to_get_functions()
    # Q_learning(code=code_lines, test_func=verifier,num=0)

    for func in deleted_functions:
        for f in function_list:
            if f["name"] == func:
                function_list.remove(f)
                logger.debug("Removed function " + func)
    other_lines = extract_other_lines(code_lines, function_list)
    logger.info("Running delta debugging to reduce global variables and other codes...")
    # reduced_code = profile(ddmin_execute,code_lines, verifier, other_lines)
    reduced_code = ddmin_execute(code_lines, verifier, other_lines)

    with open("temp/pp.c.debloated.c", "w+") as f:
        f.writelines(reduced_code)
        code_lines = f.readlines()

    # logger.info(function_list)
    # new_code = remove_function(code, "abort_gzip")
    # logger.info(function_list)

    get_labels("temp/pp.c.debloated.c")
    logger.info("Reducing functions...")
    function_list = begin_to_get_functions()
    # remove deleted functions from function list
    logger.info("Running delta debugging to reduce functions...")



    # Reorder the function list by the execution count and length
    function_list = reorder_function_list(function_list, function_execution_count)
    # reduced_code = profile( ddmin_function_level,reduced_code, verifier, function_list,1)
    reduced_code = ddmin_function_level(reduced_code, verifier, function_list, 1)
    process_labels("temp/pp.c.debloated.c")
    return lines_removed
    # reduced_code= ddmin_function_level_multiprocess(code_lines,run_test,function_list,1)



if __name__ == "__main__":
    run_dd()