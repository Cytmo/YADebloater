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


def compile(source,dest=""):
    logger.info('Compiling to '+source+"_origin")
    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o",abspath+"_origin"])
    if(utils.exit_status(ret,"Compile")==0):
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
    return ret


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
    if os.path.isfile("temp/{}".format(output_file)):
        os.system("rm temp/{}".format(output_file))
    current_work_dir = os.path.dirname(__file__)
    output_file = current_work_dir + os.sep + output_file
    if not begin_run(""" >> {}""".format(output_file)): return False
    if not begin_run("""--date '02/29/1996 1 year' +%Y-%m-%d>> {}""".format(output_file)): return False
    if not begin_run("""--date '1995-1-1' +%U>> {}""".format(output_file)): return False
    #if not begin_run("""--date '1995-1-7' +%U>> {}""".format(output_file)): return False
    #if not begin_run("""--date '1995-1-8' +%U>> {}""".format(output_file)): return False
    #if not begin_run("""--date '1992-1-1' +%U>> {}""".format(output_file)): return False
    #if not begin_run("""--date '1992-1-4' +%U >> {}""".format(output_file)): return False
    #if not begin_run(""" --date '1992-1-5' +%U >> {}""".format(output_file)): return False
    if not begin_run(""" --date '1992-1-1' +%V >> {}""".format(output_file)): return False
    #if not begin_run(""" --date '1992-1-5' +%V >> {}""".format(output_file)): return False
    #if not begin_run(""" --date '1992-1-6' +%V >> {}""".format(output_file)): return False
    if not begin_run(""" --date '1992-1-1' +%W >> {}""".format(output_file)): return False
    #if not begin_run(""" --date '1992-1-5' +%W >> {}""".format(output_file)): return False
    #if not begin_run(""" --date '1992-1-6' +%W >> {}""".format(output_file)): return False
    if not begin_run(""" --date '1998-1-1 3 years' +%Y >> {}""".format(output_file)): return False
    if not begin_run(""" -d 'TZ="America/Los_Angeles" 09:00 next Fri' >> {}""".format(output_file)): return False
    if not begin_run(""" -d "1997-01-19 08:17:48 +0 now" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 yesterday" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 tomorrow" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 6 years ago" "+%Y-%m-%d %T"   >> {}""".format(output_file)): return False
    if not begin_run(""" -d "1997-01-19 08:17:48 +0 7 months ago" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 8 weeks ago" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    if not begin_run(""" --rfc-3339=ns -d'1970-01-01 00:00:00.1234567 UTC +961062237.987654321 sec'  >> {}""".format(output_file)): return False
    if not begin_run(""" -d '2005-03-27 +1 day' '+%Y' >> {}""".format(output_file)): return False
    if not begin_run(""" -d @-22 +%05s >> {}""".format(output_file)): return False
    #if not begin_run(""" -d @-22 +%_5s >> {}""".format(output_file)): return False
    if not begin_run(""" -d "72057594037927935" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d 1999-12-08 +%_3d >> {}""".format(output_file)): return False
    if not begin_run(""" -d 1999-12-08 +%03d >> {}""".format(output_file)): return False
    if not begin_run(""" -d "1999-12-08 7:30" "+%^c" >> {}""".format(output_file)): return False
    if not begin_run(""" --rfc-3339=ns -d "2038-01-19 03:14:07.999999999" >> {}""".format(output_file)): return False
    #if not begin_run(""" --rfc-3339=ns -d "1969-12-31 13:00:00.00000001-1100" >> {}""".format(output_file)): return False
    #if not begin_run(""" --rfc-3339=sec -d @31536000 >> {}""".format(output_file)): return False
    #if not begin_run(""" --rfc-3339=date -d May-23-2003 >> {}""".format(output_file)): return False
    if not begin_run(""" -d '1999-06-01' '+%3004Y' >> {}""".format(output_file)): return False
    if not begin_run(""" --utc -d '1970-01-01 UTC +961062237 sec' "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" --utc -d '1970-01-01 00:00:00 UTC +961062237 sec' "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    if not begin_run(""" -R -d "1997-01-19 08:17:48 +0" >> {}""".format(output_file)): return False
    if not begin_run(""" -d 000909 "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d 'Nov 10 1996' "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    if not begin_run(""" -u -d '1996-11-10 0:00:00 +0' "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -u -d '1996-11-10 0:00:00 +0' "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    if not begin_run(""" -d "1997-01-19 08:17:48 +0 4 seconds ago" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 4 seconds ago" "+%Y-%m-%d %T" >> {}""".format(output_file)): return False
    #if not begin_run(""" -d '20050101  1 day' +%F >> {}""".format(output_file)): return False
    #if not begin_run(""" -d '20050101 +1 day' +%F >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 next second" '+%Y-%m-%d %T' >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 next minute" '+%Y-%m-%d %T' >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 next hour" '+%Y-%m-%d %T' >> {}""".format(output_file)): return False
    #if not begin_run(""" -d "1997-01-19 08:17:48 +0 next day" '+%Y-%m-%d %T' >> {}""".format(output_file)): return False
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