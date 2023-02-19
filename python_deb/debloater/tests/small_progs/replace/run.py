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
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno","temp")
        global BIN 
        BIN = source+"_origin"
        logger.info('Compiled file is '+BIN )



def execute(cmd):
    logger.info('running '+ cmd)
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
    cmd = 'diff temp/tmp.log temp/tmp.log2'
    ret = execute(cmd)    
    if(ret==0):
        logger.info("Verify successed!")
    else:
        logger.info("Verify failed!")
    
def run_tests(output_file="tmp.log"):
    cmds = []
    current_work_dir = os.path.dirname(__file__)
    output_file = current_work_dir + os.sep + output_file

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