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
    visitor = FuncDefVisitor()
    visitor.visit(ast)
    for func in visitor.functions:
        func["lines"] = code.splitlines()[func["start_line"] - 1 : func["end_line"]]
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


def verifier(src, num=0):
    file_temp = "temp/temp_{}.c".format(num)
    with open(file_temp, "w") as f:
        f.writelines(src)
    if compile(file_temp, num) != 0:
        logger.debug("Compile Failed")
        return False
        # os.system('rm {}'.format(file_temp))
    dir_name = "temp"
    cmd = "python3 %s/run.py dd_verify %d" % (dir_name, num)
    ret = os.system("{}".format(cmd))

    """Put ur test code here"""

    # output_file = 'output_{}'.format(num)

    # cmds = []
    # current_work_dir = 'temp'
    # BIN = 'temp/deb_{}.out'.format(num)
    # # $BIN '[d]*' '&@t& lkj[0-9]&' < $INDIR/moni/rr19.t &>> $OUTDIR/o0
    # cmd0 = "{} '[d]*' '&@t& lkj[0-9]&' < {}/train/moni/rr19.t >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '@h' 'w0Yj|`l`AYgv{M<#KAouk' < $INDIR/input/ruin.1035 &>> $OUTDIR/o1
    # cmd1 = "{} '@h' 'w0Yj|`l`AYgv{{M<#KAouk' < {}/train/input/ruin.1035 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '@**?' 'b@t' < $INDIR/temp-test/2179.inp.922.1 &>> $OUTDIR/o2
    # cmd2 = "{} '@**?' 'b@t' < {}/train/temp-test/2179.inp.922.1 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '?[^9-B]' 'a@n' < $INDIR/temp-test/282.inp.126.2 &>> $OUTDIR/o3
    # cmd3 = "{} '?[^9-B]' 'a@n' < {}/train/temp-test/282.inp.126.2 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '-[^-z]' '&a@%' < $INDIR/temp-test/768.inp.329.1 &>> $OUTDIR/o4
    # cmd4 = "{} '-[^-z]' '&a@%' < {}/train/temp-test/768.inp.329.1 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN 'x' 'vif#21aJuxd&,I1PPnf{b,On|j&db8)b<`\|' < $INDIR/input/ruin.334 &>> $OUTDIR/o5
    # cmd5 = "{} 'x' 'vif#21aJuxd&,I1PPnf{{b,On|j&db8)b<`\|' < {}/train/input/ruin.334 >> {}".format(BIN, current_work_dir, output_file)
    # #  $BIN '%yw,0+8@n' 'a&`' < $INDIR/input/ruin.1158 &>> $OUTDIR/o6
    # cmd6 = "{} '%yw,0+8@n' 'a&`' < {}/train/input/ruin.1158 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '%?[@@][^0-9][a-c]?-[^0-9]- [^9-B]$' 'NEW' < $INDIR/temp-test/1129.inp.485.10 &>> $OUTDIR/o7
    # cmd7 = "{} '%?[@@][^0-9][a-c]?-[^0-9]- [^9-B]$' 'NEW' < {}/train/temp-test/1129.inp.485.10 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '-?@@*[_-z][^0-9]' '&' < $INDIR/temp-test/821.inp.354.1 &>> $OUTDIR/o8
    # cmd8 = "{} '-?@@*[_-z][^0-9]' '&' < {}/train/temp-test/821.inp.354.1 >> {}".format(BIN, current_work_dir, output_file)
    # # $BIN '[^9-B][^]@[**' 'a' < $INDIR/moni/f7.inp &>> $OUTDIR/o9
    # cmd9 = "{} '[^9-B][^]@[**' 'a' < {}/train/moni/f7.inp >> {}".format(BIN, current_work_dir, output_file)

    # cmds.append(cmd0)
    # cmds.append(cmd1)
    # cmds.append(cmd2)
    # cmds.append(cmd3)
    # cmds.append(cmd4)
    # cmds.append(cmd5)
    # cmds.append(cmd6)
    # cmds.append(cmd7)
    # cmds.append(cmd8)
    # cmds.append(cmd9)

    # for cmd in cmds:
    #     execute(cmd)

    # cmd1 = 'temp/deb_{}.out -c < temp/train/aaa.txt > output_{}'.format(num,num)
    # ret = execute(cmd1)
    # cmd2 = 'diff temp/standard_output output_{} > /dev/null 2>&1'.format(num)
    # ret = execute(cmd2)
    # os.system('rm output_{}'.format(num))
    # os.system('rm temp/deb_{}.out'.format(num))
    if ret == 0:
        logger.debug("Test Passed")
        return True
    else:
        logger.debug("Test Failed")
        return False


def ddmin_execute(code, test_func, line_list):
    # add a test_cache to reduce the unnecessary exec of same reduced functions
    cache = {}
    # Initialize the starting granularity to the size of code (coarsest granularity)
    max_length = len(code)
    original_length = len(line_list)
    granularity = 1
    last_reduced_line = 0
    with tqdm(total=max_length,desc='gran {}'.format(granularity) ) as pbar:  # initialize tqdm progress bar
        while len(code) > 0 and granularity >= 1:
            # Initialize the candidate to the original code
            candidate = copy.deepcopy(code)
            line_list_reduced = copy.deepcopy(line_list)
            # Flag to indicate if the code was reduced in the current iteration
            reduced = False

            if last_reduced_line != 0:
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
                    if j in line_list and candidate[j].strip() not in ("", "{", "}", ";"):
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
                    test_result = test_func(candidate)
                    cache[cache_key] = test_result

                # line_list = [x - (max_length - i) if x >= max_length else x for x in line_list]
                # Call the test function with the reduced code
                if removed_code and test_func(candidate):                    # write_to_file(removed_code,True)
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
                            .replace("}", "")
                            .replace("{", "")
                            .replace(";", "")
                            == "" 
                    ):
                        logger.debug("Skipped")
                        continue
                    candidate_func_code = ''.join(candidate[func["start_line"]:func["end_line"]])
                    candidate_func_code_no_blank_lines = ''.join(line for line in candidate_func_code.splitlines(True) if line.strip())
                    cache_key = candidate_func_code_no_blank_lines
                    if cache_key in test_cache:
                        result = test_cache[cache_key]
                        logger.debug('Already have result in cache, skip the test')
                    else:
                        result = test_func(candidate, num)
                        test_cache[cache_key] = result
                    if result:
                        # If the test passes, update the original code and reduce granularity
                        code = copy.deepcopy(candidate)
                        total_removed += 1
                        reduced = True
                        # Update the smallest set of lines for the function
                        new_smallest_func = []
                        for i in range(func["start_line"] + 1, func["end_line"]):
                            if code[i] != "\n":
                                new_smallest_func.append(candidate[i])
                        smallest_set[func['name']] = new_smallest_func


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
    with open("temp/reduced_code.c", "w") as f:
        f.writelines(code)

    with open('smallest_code', 'w') as f:
        f.write(str(smallest_set))
        f.write(str(function_list))
    return [code, function_list]


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
    # iterate through the lines of the code
    for line_num in range(0, length):
        other_lines.append(line_num)
    for func in func_list:
        # iterate through the lines of the function
        for line_num in range(func["start_line"] - 2, func["end_line"]):
            # remove the line number of the function from the list of all line numbers
            if line_num in other_lines:
                other_lines.remove(line_num)

    # now we get other lines' number, we should remove blank lines from it
    for line in other_lines:
        # logger.info('line number is '+str(line)+', content is '+src[line].strip())
        if src[line].strip() == "":
            other_lines.remove(line)
    return other_lines


def run_dd(deleted_functions=[]):
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

    logger.info("Reducing functions...")
    function_list = begin_to_get_functions()
    # remove deleted functions from function list
    logger.info("Running delta debugging to remove deleted functions from function list...")
    for func in deleted_functions:
        for f in function_list:
            if f["name"] == func:
                function_list.remove(f)
                logger.debug("Removed function " + func)
    # reduced_code = profile( ddmin_function_level,reduced_code, verifier, function_list,1)
    reduced_code = ddmin_function_level(reduced_code, verifier, function_list, 1)

    # reduced_code= ddmin_function_level_multiprocess(code_lines,run_test,function_list,1)
    # with open('reduced.c', 'w') as f:
    #     f.writelines(reduced_code)


if __name__ == "__main__":
    run_dd()
