import os
from shutil import copyfile
import subprocess
import argparse
import sys


def exit_with_error(fun_name,name):
    exit("Program exited at function   "+fun_name+"()   because of   "+name+" failed")
    
def exit_status(ret,name="This Process"):
    if ret != 0:
        if ret < 0:
         print(name+" Killed by signal", -ret)
         exit_with_error(sys._getframe().f_code.co_name,name)
        else:
         print(name+" failed with return code", ret)
         exit_with_error(sys._getframe().f_code.co_name,name)
    else:
        print(name+" Success")
        return 0
    return 1


def clean():
    print('Cleaning...')
    # print('R u sure u want to run the following cmd '+"rm "+source_path+".*"+" Y(y) or N(n)")
    # decision = input()
    # if(decision=='y' or decision=="Y"):
    os.system("rm *.gcda *.gcno *.gcov cov_merged cov_merged1 *.debloated.c" )
    os.system("rm -r result" )

def finish(source_path):
    os.system("mkdir result")
    os.system("cp "+source_path+".debloated.c result ")
    os.system("cp print.log result ")
    os.system("cp "+source_path+" result ")
    print('Debloating Finished!')



if __name__ == "__main__" :
    clean()