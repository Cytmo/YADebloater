from datetime import datetime
import imp
import logging
import os
import re
from shutil import copyfile
import subprocess
import argparse
import sys
import glob
import time

current_work_dir = os.path.dirname(__file__)




class GetLog(object):
    def __init__(self):
        self.name = 'log'
        self.level = logging.DEBUG
        self.filename = 'test.log'
        logging.info("Logging to %s", self.filename)


    def get_log(self):

        #设置logger
        logging.getLogger().handlers = []
        logger = logging.getLogger(name=self.name)
        logger.setLevel(level=self.level)

        logger.handlers = []
            # 初始化handler
        stream_handler = logging.StreamHandler()
        file_handler = logging.FileHandler(filename=self.filename)

        # 设置handler等级
        stream_handler.setLevel(level=logging.INFO)
        file_handler.setLevel(level=self.level)

        # 设置日志格式
        sf_format = logging.Formatter("%(asctime)s-[line:%(lineno)d]-%(levelname)s-%(message)s", "%H:%M:%S")
        stream_handler.setFormatter(sf_format)
        sf_format = logging.Formatter("[line:%(lineno)d]-%(levelname)s-%(message)s")
        file_handler.setFormatter(sf_format)
        
        # 将handler添加到self.__logger
        logger.addHandler(stream_handler)
        logger.addHandler(file_handler)

        #返回logger
        return logger
    
logger = GetLog().get_log()

def exit_with_error(fun_name,name):
    exit("Program exited at function   {}()   because of   {} failed".format(fun_name,name))
    
def exit_status(ret,name="This Process"):
    if ret != 0:
        if ret < 0:
         logger.info("{} Killed by signal {}".format(name,ret))
         exit_with_error(sys._getframe().f_code.co_name,name)
        else:
         logger.info("{} failed with return code {}".format(name,ret))
         exit_with_error(sys._getframe().f_code.co_name,name)
    else:
        logger.info("{} Success".format(name))
        return 0
    return 1


def create_directory(prefix, timestamp=False):
    if timestamp:
        directory_name = prefix + '_' + str(datetime.now())
    else:
        directory_name = prefix
    os.makedirs(directory_name)
    return directory_name


def get_final_filename(filepath):
    split_string = filepath.split(os.sep)
    last_index = len(split_string)-1
    if split_string[last_index] == '':
        return split_string[last_index-1]
    else:
        return split_string[last_index]

def get_files_in_folder(filepath):
    filepath=filepath+os.sep+"*"
    files=[]
    for file_abs in glob.glob(filepath):
        files.append(file_abs)
    return files


# format the code with clang-format GNU sytle and return the formatted code
def formatter(filename):
    os.system("clang-format -style=file "+filename+" > "+filename+".formatted.c")
    return filename+".formatted.c"
    
def remove_file(filepath,prefix='null'):
    if(prefix=='null'):
        os.remove(filepath)
    else:
        os.remove(prefix+os.sep+filepath)

def copy_file(source_path,dest_path):
    os.system("cp "+source_path+" "+dest_path)


def move_gcov_files(dest_path):
    move_file("*.gcda",dest_path)
    move_file("*.gcno",dest_path)
    

def move_file(source_path,dest_path):
    os.system("mv "+source_path+" "+dest_path)


def remove_comments(source_path):
    logger.info('Removing comments...')
    uncmtFile = ''
    with open(source_path, 'r') as f:
        # uncmtFile = removeComments(f.read())
        uncmtFile = comment_remover(f.read())
    
    # write back to the file
    with open(source_path, 'w') as f:
        f.write(uncmtFile)
    
    return source_path


def comment_remover(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " # note: a space and not an empty string
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)

def exec_cmd(cmd):
    logger.info('Running '+cmd)
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()

    
def clean():
    logger.info('Cleaning...')
    # logger.info('R u sure u want to run the following cmd '+"rm "+source_path+".*"+" Y(y) or N(n)")
    # decision = input()
    # if(decision=='y' or decision=="Y"):
    # os.system("rm *.gcda *.gcno *.gcov cov_merged cov_merged1 *.debloated.c" )
    os.system("rm -r result" )
    os.system("rm -r temp" )
    os.system("rm tmp.log tmp.log2 trans.txt ast.txt")
    
    
def finish(source_path):
    logger.info('Debloating Finished!')
    os.system("mkdir result")
    # new_source_path = cparser.translate_to_c(source_path+".debloated.c",False)
    new_source_path = source_path+".debloated.c"
    os.system("cp "+new_source_path+" result ")
    

    # os.system("cp temp/print.log result ")
    os.system("cp "+source_path+" result ")
    cmd = "python3 %s/run.py verify %s" %("temp",new_source_path)
    exec_cmd(cmd)
    # log_file.close()


if __name__ == "__main__" :
    clean()
    # logger.info(get_final_subfolder(create_output_directory('temp')))