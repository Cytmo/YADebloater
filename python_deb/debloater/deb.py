import os
from shutil import copyfile
import subprocess
import argparse
import sys
import utils
import merge
import json_code_remover
import time
parser = argparse.ArgumentParser()
#Argument list
parser.add_argument("-s",'--source_file',required=True, type=str,help='The path to source file')
parser.add_argument("-i",'--original_inputs',required=True, type=str,help='The path to ur inputs, which should contain the features u want to preserve')
parser.add_argument("-option_string1","--o1",type=str,help="An test for optional para")
args = parser.parse_args()
print(args)
#Global var
source_path=args.source_file
binary_path=""
input_path=args.original_inputs
dir_name=""


def compile_with_cov(source,dest=""):
    print('Compiling to '+source+"_origin")
    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath, "-o",abspath+"_origin","-fprofile-arcs","-ftest-coverage"])
    if(utils.exit_status(ret,"Compile")==0):
        utils.move_file("*.gcno",dir_name)
        global binary_path 
        binary_path = source+"_origin"
        print('Compiled file is '+binary_path )
        
def parse_inputs():
    print("Input folder is "+input_path)
    files = utils.get_files_in_folder(input_path)
    for input_file in files:
        file = open(input_file)  
        inputs=[]
        
        line = file.readline()             
        while line:                
            inputs.append(line.replace("\n","")) 
            line=file.readline()

        file.close()
        print('The inputs to be ran:')
        for line in inputs:
            print(line)
    return inputs


def run_inputs(mode):
    run_time=0
    parsed_inputs=parse_inputs()
    output=open(dir_name+os.sep+'output',mode='w')
    for line in parsed_inputs:
        print("running the "+str(run_time)+"th input: "+line)
        run_time+=1
        run_prog(line,output)
        
        # merge.cov_merge(source_path,run_time,dir_name)
    output.close()    
    
    # generate Output JSON intermediate format into .gcov.json.gz file
    ret1 = subprocess.call(["gcov","-i",source_path])
    utils.exit_status(ret1,"gcov generate")
    
    utils.move_file("*.gcov.json.gz",dir_name)
    
    ret2 = subprocess.call(["gzip","-d",source_path+".gcov.json.gz"])
    utils.exit_status(ret2,"gcov decompress")
    
    
    # move the generated .gcov file to temp folder
    # utils.move_file("*.gcov",dir_name)

def run_prog(arg,dest):
    # 指定dest后，第二次运行run会卡死？
    # ret = subprocess.run([binary_path,arg],stdout=dest)
    ret = subprocess.run([binary_path,arg])
    
    # move the generated file to temp folder
    # No need to move .gcov file every time because cov data will auto gain in .gcda file
    # utils.move_gcov_files(dir_name)
    
    #ret=CompletedProcess(args='gzip-1.2.4/gzip-1.2.4.c.origin.c_origin', returncode=1)
    if(ret.returncode!=0):
        print("Program exited with code "+str(ret.returncode))
    else:
        print("Program exited normally")
        


if __name__ == '__main__':
    # Redirect output to print.log
    t = time.time()
    

    utils.clean()
    
   
    new_source_path,new_input_path,dir_name=utils.preparation(source_path,input_path)	    
    source_path = new_source_path
    input_path = new_input_path
    
    fp = open("temp"+os.sep+"print.log", "w+")
    sys.stdout = fp 
    	  
    print('{:30s}{}'.format('Now time is ',time.strftime('%Y-%m-%d %H:%M:%S')))
    print("The source file u want to run debloat with is "+args.source_file)
    
    compile_with_cov(source_path)
    run_inputs("file_input")
    json_code_remover.code_remove(source_path+".gcov.json",source_path)

    
    print(f'time cost:{time.time() - t:.4f}s')
    
    
    utils.finish(args.source_file,fp)
   # r = subprocess.call(["gcc -fprofile-arcs -ftest-coverage"])
