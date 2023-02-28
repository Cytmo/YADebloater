#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys
import utils
BIN = ''
source_path=''
logger=''

def compile_with_cov(source,dest=""):
    logger.info('Compiling to '+source+"_origin")

    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno","temp")
        global BIN 
        BIN = source+"_origin"
        logger.info('Compiled file is '+BIN )



def execute(cmd):
    logger.info('running '+cmd)
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()
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
    cmd = 'diff tmp.log tmp.log2'
    ret = execute(cmd)    
    if(ret==0):
        logger.info("Verify successed!")
    else:
        logger.info("Verify failed!")
    
def run_tests(output_file="tmp.log"):
    if output_file != 'tmp.log2':
        for fname in os.listdir('temp/train'):
            for i in range(0,10):
                fpath = os.path.join('temp/train', fname)
                cmd = 'radamsa --seed {} {} > {}_rad_{}'.format(i,fpath, fpath,i)
                logger.info('Generating fuzzed testfiles, cmd is {}'.format(cmd))
                execute(cmd)
    for fname in os.listdir('temp/train'):
        fpath = os.path.join('temp/train', fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' > '+output_file
        execute(cmd)
    


def test():
    BIN = './gzip.orig_temp/gzip.orig.debloated'

    for fname in os.listdir('test'):
        fpath = os.path.join('test', fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' > tmp.log'
        execute(cmd)


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
    logger.info('python run.py clean|run_tests|debloat\n')
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