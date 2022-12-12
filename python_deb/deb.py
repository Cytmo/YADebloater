import os
from shutil import copyfile
import subprocess
import argparse
import sys
import utils
import merge
parser = argparse.ArgumentParser()
#Argument list
parser.add_argument("-s",'--source_file', type=str,default="./gzip-1.2.4.c.origin.c" ,help='The path to source file')
parser.add_argument("-i",'--original_inputs', type=str,default="./gzip-1.2.4/inputs/input" ,help='The path to ur inputs, which should contain the features u want to preserve')
parser.add_argument("-option_string1","--o1",type=str,help="An test for optional para")
args = parser.parse_args()
print(args)
#Global var
source_path=args.source_file
binary_path=""
input_path=args.original_inputs



def compile_with_cov(source,dest=""):
    print('Compiling...')
    ret = subprocess.call(["gcc",source, "-o",source+"_origin","-fprofile-arcs","-ftest-coverage"])
    if(utils.exit_status(ret,"Compile")==0):
        global binary_path 
        binary_path = source+"_origin"
        print('Compiled file is '+binary_path )
        
def parse_inputs():
    file = open(input_path)  
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
    output=open('output',mode='w')
    for line in parsed_inputs:
        print("running the "+str(run_time)+"th input: "+line)
        run_time+=1
        run_prog(line,output)
        ret = subprocess.call(["gcov",source_path])
        utils.exit_status(ret,"gcov generate")
        merge.cov_merge(source_path,run_time)
    output.close()    

def run_prog(arg,dest):
    # 指定dest后，第二次运行run会卡死？
    # ret = subprocess.run([binary_path,arg],stdout=dest)
    ret = subprocess.run([binary_path,arg])
    #ret=CompletedProcess(args='gzip-1.2.4/gzip-1.2.4.c.origin.c_origin', returncode=1)
    if(ret.returncode!=0):
        print("Program exited with code "+str(ret.returncode))
    else:
        print("Program exited normally")
        




if __name__ == '__main__':
    fp = open("print.log", "w+")
    sys.stdout = fp 		    
    print("The source file u want to run debloat with is "+args.source_file)
    utils.clean()
    compile_with_cov(args.source_file)
    run_inputs("file_input")
   # r = subprocess.call(["gcc -fprofile-arcs -ftest-coverage"])
