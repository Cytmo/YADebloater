#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys
import utils
BIN = ''
source_path=''
logger = ''

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
    logger.info('running '+ cmd)
    p = subprocess.Popen(cmd, shell=True)
    p.communicate(timeout=5)
    return p.returncode

def debloat():
    run_tests()
    # get gcov data
    ret1 = subprocess.call(["gcov","-i",source_path])
    utils.exit_status(ret1,"gcov generate")
    
    utils.move_file("*.gcov.json.gz","temp")
    
    ret2 = subprocess.call(["gzip","-d",source_path+".gcov.json.gz"])
    utils.exit_status(ret2,"gcov decompress")
    
def verify():
    run_tests("tmp.log2")
    cmd = 'diff temp/tmp.log temp/tmp.log2'
    ret = execute(cmd)    
    if(ret==0):
        print("Verify successed!")
    else:
        print("Verify failed!")
    
    
def begin_run(arg):
    cmd = BIN + ' ' + arg
    execute(cmd)

def run_tests(output_file="tmp.log"):
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
    return

def test():
    BIN = './gzip.orig_temp/gzip.orig.debloated'

    for fname in os.listdir('test'):
        fpath = os.path.join('test', fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' >> tmp.log'
        execute(cmd)


def clean():
    for fname in os.listdir('./'):
        if fname == "run.py" or fname == "utils.py":
            continue
        if fname.startswith('test') or fname.startswith('train') or fname == "backup":
            continue
        
        if fname == 'test' or fname == 'train' or fname == "backup":
            continue

        if fname == "gzip-1.2.4.c":
            continue

        execute('rm -rf ./' + fname)

def usage():
    print('python run.py clean|run_tests|debloat\n')
    sys.exit(1)

def main():
    global BIN,logger,source_path
    logger = utils.GetLog().get_log()
    

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
    
    else:
        usage()

if __name__ == '__main__':
    main()