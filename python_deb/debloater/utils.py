from datetime import datetime
import imp
import os
from shutil import copyfile
import subprocess
import argparse
import sys
import glob
import cparser


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

def preparation(source_path,input_path):
    print('Preparing...')
    print('Copying needed files...')
    dir_name = create_directory('temp')
    input_dir_name = create_directory('temp'+ os.sep +'input')
    os.system("cp "+source_path+" "+dir_name)  
    os.system("cp "+input_path+" "+ input_dir_name)  
    new_source_path = dir_name+os.sep+get_final_filename(source_path)
    
    # use pycparser to format the input c file
    new_source_path = cparser.translate_to_c(new_source_path)
    
    
    
    new_input_path = dir_name+os.sep+get_final_filename(input_path)
    return new_source_path,new_input_path,dir_name
    
def clean():
    print('Cleaning...')
    # print('R u sure u want to run the following cmd '+"rm "+source_path+".*"+" Y(y) or N(n)")
    # decision = input()
    # if(decision=='y' or decision=="Y"):
    # os.system("rm *.gcda *.gcno *.gcov cov_merged cov_merged1 *.debloated.c" )
    os.system("rm -r result" )
    os.system("rm -r temp" )

def finish(source_path,log_file):
    print('Debloating Finished!')
    os.system("mkdir result")
    new_source_path = cparser.translate_to_c(source_path+".debloated.c",False)

    os.system("cp "+new_source_path+" result ")
    
    log_file.close()
    os.system("cp temp/print.log result ")
    os.system("cp "+source_path+" result ")
    



if __name__ == "__main__" :
    clean()
    # print(get_final_subfolder(create_output_directory('temp')))