#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys
import utils
BIN = ''
source_path=''
logger=utils.GetLog().get_log()

def compile_with_cov(source,dest=""):
    logger.info('Compiling to '+source+"_origin")
    # gcc will cause the program to seg fault, use clang instead
    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage","-D __msan_unpoison(s,z)","-lpcre"])    
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno","temp")
        global BIN 
        BIN = source+"_origin"
        logger.info('Compiled file is '+BIN )



def execute(cmd):
    logger.debug('Running {}'.format(cmd))
    # print('Executing {}'.format(cmd))
    p = os.system('timeout -s SIGKILL 1 {} 2>&1'.format(cmd))
    # try:
    #     p.communicate(timeout=0.2)
    # except subprocess.TimeoutExpired:
    #     p.kill()
    #     p.communicate()
    #     return 1
    return p 


def debloat():
    run_tests()
    # get gcov data
    utils.move_file("temp/pp.c_origin-pp.gcda","temp/pp.gcda")
    utils.move_file("temp/pp.c_origin-pp.gcno","temp/pp.gcno")
    ret1 = subprocess.call(["gcov","-i",'temp/pp.c'])
    utils.exit_status(ret1,"gcov generate")
    
    utils.move_file("*.gcov.json.gz","temp/pp.c.gcov.json.gz")
    
    ret2 = subprocess.call(["gzip","-d",source_path+".gcov.json.gz"])
    utils.exit_status(ret2,"gcov decompress")
    
    
    
def begin_run(arg):
    cmd = BIN + ' ' + arg
    if execute(cmd) == 0:
        return
    # else:
    #     os._exit(1)

def run_tests(output_file="standard_output"):
    cmds = []
    current_work_dir = os.path.dirname(__file__)
    output_file = current_work_dir + os.sep + output_file
    begin_run( """ "a" temp/train1  >> {}""".format(output_file))
    begin_run( """ -n "si" temp/train1  >> {}""".format(output_file))
    begin_run( """ -o [r][a][n][d]* temp/train1  >> {}""".format(output_file))
    begin_run( """ -v "a" temp/train1  >> {}""".format(output_file))
    begin_run( """ -i "Si" temp/train1  >> {}""".format(output_file))
    begin_run( """ -w "Si" temp/train1  >> {}""".format(output_file))
    begin_run( """ -x "Don't" temp/train1  >> {}""".format(output_file))
    begin_run( """ -E "randomtext*" temp/train1  >> {}""".format(output_file))
    begin_run( """ "ye " temp/train1  >> {}""".format(output_file))
    begin_run( """ "cold" temp/train1  >> {}""".format(output_file))
    begin_run( """ "not exist" temp/train1  >> {}""".format(output_file))
    begin_run( """ ^D  temp/train1  >> {}""".format(output_file))
    begin_run( """ .$  temp/train1  >> {}""".format(output_file))
    begin_run( """ \^  temp/train1  >> {}""".format(output_file))
    begin_run( """ \^$  temp/train1  >> {}""".format(output_file))
    begin_run( """ ^[AEIOU]  temp/train1  >> {}""".format(output_file))
    begin_run( """ ^[^AEIOU]  temp/train1  >> {}""".format(output_file))
    begin_run( """ -E "free[^[:space:]]+"  temp/train1  >> {}""".format(output_file))
    begin_run( """ -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.)3}}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)'  temp/train1  >> {}""".format(output_file))
    # cmds.append(cmd9)
    
    # for cmd in cmds:
    #     execute(cmd)
    return True

def debloat():
    run_tests()
    # get gcov data
    utils.move_file("temp/pp.c_origin-pp.gcda","temp/pp.gcda")
    utils.move_file("temp/pp.c_origin-pp.gcno","temp/pp.gcno")
    ret1 = subprocess.call(["gcov","-i",'temp/pp.c'])
    utils.exit_status(ret1,"gcov generate")
    
    utils.move_file("*.gcov.json.gz","temp/pp.c.gcov.json.gz")
    
    ret2 = subprocess.call(["gzip","-d",source_path+".gcov.json.gz"])
    utils.exit_status(ret2,"gcov decompress")


def verifier(num):
    global BIN
    BIN = 'temp/deb_{}.out'.format(num)
    if not run_tests("output_{}".format(num)):
        sys.exit(1)
    if verify(dd=True,num=num):
        sys.exit(0)
    else:
        sys.exit(1)


def verify(dd=False,num=-1):
    if not dd:
        run_tests("tmp.log2")
        cmd = 'diff temp/standard_output temp/tmp.log2 > /dev/null 2>&1'

        ret = execute(cmd)   
        os.system('rm temp/tmp.log2') 
        if(ret==0):
            logger.info("Verify successed!")
            return True
        else:
            logger.info("Verify failed!")
            return False    
    else:
        assert num!=-1
        cmd2 = 'diff temp/standard_output temp/output_{} > /dev/null 2>&1'.format(num)
        
        ret = execute(cmd2)
        os.system('rm temp/output_{}'.format(num))
        if(ret==0):
            logger.debug("Verify successed!")
            return True
        else:
            logger.debug("Verify failed!")
            return False    





def clean():
    for fname in os.listdir('./'):
        if fname == "run.py" or fname == "utils.py":
            continue
        
        if fname == 'test' or fname == 'train' or fname == "backup":
            continue

        if fname == "gzip-1.2.4.c":
            continue

        execute('rm -rf ./' + fname)

def usage():
    logger.info('python run.py clean|run_tests|verify|dd_verify\n')
    sys.exit(1)

def main():
    global BIN,source_path

    if len(sys.argv) != 2 and len(sys.argv) != 3:
        usage()

    if sys.argv[1] == 'debloat':
        source_path = sys.argv[2]
        compile_with_cov(source_path)
        BIN =  "./"+source_path + "_origin"
        debloat()

    elif sys.argv[1] == 'clean':
        clean()

    elif sys.argv[1] == 'verify':
        source_path = sys.argv[2]
        compile_with_cov(source_path)
        BIN =  "./"+source_path + "_origin"
        verify()
    elif sys.argv[1] == 'dd_verify':
        num = sys.argv[2]
        verifier(num)
    
    else:
        usage()

if __name__ == '__main__':
    main()