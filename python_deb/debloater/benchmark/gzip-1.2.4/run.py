#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys
import utils
BIN = ''
source_path=''
logger=utils.GetLog().get_log()


    
def run_tests(output_file="standard_output"):
    if output_file == "standard_output" or output_file== "tmp.log2":
        if os.path.isfile("temp/deb.out"):
            os.system("rm temp/deb.out")
        os.system("cp temp/pp.c_origin temp/deb.out")
        global BIN
        BIN = "temp/deb.out"
    # if output_file == "standard_output":
    #     for fname in os.listdir('temp/train'):
    #         for i in range(0,10):
    #             fpath = os.path.join('temp/train', fname)
    #             cmd = 'radamsa --seed {} {} > {}_rad_{}'.format(i,fpath, fpath,i)
    #             logger.info('Generating fuzzed testfiles, cmd is {}'.format(cmd))
    #             execute(cmd)
    current_work_dir = os.path.dirname(__file__)
    output_file = current_work_dir + os.sep + output_file

    # if output_file already exists, remove it
    # os.system('rm {} > /dev/null 2>&1'.format(output_file))
    

    trainc = 'temp/train_input/trainc'
    for fname in os.listdir(trainc):
        fpath = os.path.join(trainc, fname)
        # -c
        cmd = BIN + ' -c < ' + fpath + ' >> '+output_file
        ret = execute(cmd)
        if ret != 0 and ret != 256 and ret != 512:
            logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
            return False
    
    
    traind = 'temp/train_input/traind'
    for fname in os.listdir(traind):
        fpath = os.path.join(traind, fname)
        # -d
        cmd = BIN + ' -d < ' + fpath + ' >> '+output_file
        ret = execute(cmd)
        if ret != 0 and ret != 256 and ret != 512:
            logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
            return False

    
    trainf = 'temp/train_input/trainf'
    for fname in os.listdir(trainf):
        fpath = os.path.join(trainf, fname)
        # -f
        cmd = BIN + ' -f ' + fpath + ' >> '+output_file
        ret = execute(cmd)
        if ret != 0 and ret != 256 and ret != 512:
            logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
            return False

    # traink = 'temp/train_input/traink'
    # for fname in os.listdir(traink):
    #     fpath = os.path.join(traink, fname)
    #     # -k
    #     cmd = BIN + ' -k ' + fpath + ' >> '+output_file
    #     ret = execute(cmd)
    #     if ret != 0 and ret != 256 and ret != 512:
    #         logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
    #         return False
        
    traint = 'temp/train_input/traint'
    for fname in os.listdir(traint):
        fpath = os.path.join(traint, fname)
        # -t
        cmd = BIN + ' -t ' + fpath + ' >> '+output_file
        ret = execute(cmd)
        if ret != 0 and ret != 256 and ret != 512:
            logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
            return False
    return True

def compile_with_cov(source,dest=""):
    logger.info('Compiling to '+source+"_origin")

    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno","temp")
        global BIN 
        BIN = source+"_origin"
        logger.info('Compiled file is '+BIN )

def compile(source,dest=""):
    logger.info('Compiling to '+source+"_origin")
    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin"])
    if(utils.exit_status(ret,"Compile")==0):
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


def verifier(num):
    global BIN
    BIN = 'temp/deb.out'
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
        compile(source_path)
        BIN =  "./"+source_path + "_origin"
        verify()
    elif sys.argv[1] == 'dd_verify':
        num = sys.argv[2]
        verifier(num)
    
    else:
        usage()

if __name__ == '__main__':
    main()