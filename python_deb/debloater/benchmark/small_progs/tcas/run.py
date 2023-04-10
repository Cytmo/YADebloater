#!/usr/bin/python
from __future__ import print_function
import os, subprocess, sys
import utils
BIN = ''
source_path=''
logger=utils.GetLog().get_log()

def compile_with_cov(source,cov=False):
    logger.info('Compiling to '+source+"_origin")
    # gcc will cause the program to seg fault, use clang instead
    abspath = os.path.abspath(source)
    if cov:
        ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage","-D __msan_unpoison(s,z)","-lpcre"])    
    else :
        ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-D __msan_unpoison(s,z)","-lpcre"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno","temp")
        global BIN 
        BIN = source+"_origin"
        logger.info('Compiled file is '+BIN )



def execute(cmd):
    # logger.debug('Running {}'.format(cmd))
    # print('Executing {}'.format(cmd))
    ret = os.system('timeout -s SIGKILL 1 {} 2>&1'.format(cmd))
    if ret >512:
        logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
        return 1
    return 0


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
    if execute(cmd)==0:
        return True
    else:
        return False

def run_tests(output_file="standard_output"):
    cmds = []
    current_work_dir = os.path.dirname(__file__)
    output_file = current_work_dir + os.sep + output_file

    # if output_file already exists, remove it
    os.system('rm {} > /dev/null 2>&1'.format(output_file))



    # $BIN 990 1 1 9671 622 173 2 0 766 0 2 1 &> $OUTDIR/o0
    cmd0 = "{} 990 1 1 9671 622 173 2 0 766 0 2 1 >> {}".format(BIN, output_file)
    # $BIN 700 1 1 575 415 1 0 795 796 2 2 0 &> $OUTDIR/o1
    cmd1 = "{} 700 1 1 575 415 1 0 795 796 2 2 0 >> {}".format(BIN, output_file)
    # $BIN 65 0 1 300 700 424 2 600 500 1 1 1 &> $OUTDIR/o2
    cmd2 = "{} 65 0 1 300 700 424 2 600 500 1 1 1 >> {}".format(BIN, output_file)
    # $BIN 0 1 -1 0 388 737 3 0 470 0 2 1 &> $OUTDIR/o3
    cmd3 = "{} 0 1 -1 0 388 737 3 0 470 0 2 1 >> {}".format(BIN, output_file)
    # $BIN 775 1 1 1142  411 1704 1  540  500 1 0 1 &> $OUTDIR/o4
    cmd4 = "{} 775 1 1 1142  411 1704 1  540  500 1 0 1 >> {}".format(BIN, output_file)
    # $BIN 698 1 0 2071 59 307 0 849 904 1 2 0 &> $OUTDIR/o5
    cmd5 = "{} 698 1 0 2071 59 307 0 849 904 1 2 0 >> {}".format(BIN, output_file)
    # $BIN 804 0 1 1933  194 1176 0  640  639 1 0 0 &> $OUTDIR/o6
    cmd6 = "{} 804 0 1 1933  194 1176 0  640  639 1 0 0 >> {}".format(BIN, output_file)
    #  $BIN 826 0 0 3619  369 2109 1  741  639 0 1 1 &> $OUTDIR/o7
    cmd7 = "{} 826 0 0 3619  369 2109 1  741  639 0 1 1 >> {}".format(BIN, output_file)
    # $BIN 643 1 1 5514  362 2288 1  400  741 1 1 0 &> $OUTDIR/o8
    cmd8 = "{} 643 1 1 5514  362 2288 1  400  741 1 1 0 >> {}".format(BIN, output_file)
    # $BIN 675 0 0 300 0 424 5 600 500 1 1 1 &> $OUTDIR/o9
    cmd9 = "{} 675 0 0 300 0 424 5 600 500 1 1 1 >> {}".format(BIN, output_file)

    
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
        ret = execute(cmd)
        if ret != 0 and ret != 256 and ret != 512:
            logger.debug("Failed to execute command: {}, ret code is {}".format(cmd, ret))
            return False
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
        compile_with_cov(source_path,cov=True)
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