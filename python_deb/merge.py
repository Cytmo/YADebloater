import os
import shutil
import subprocess
import utils
import time
def cov_merge(source_path,run_time):
    print('Merging...'+" current run time is "+str(run_time))
    
    if(run_time!=1):
        source_file=open(source_path)
        print("Merging from "+source_file.name+".gcov to cov_merged")
        print("Merging...\n\n\n")
        gcov_file=open(source_file.name+".gcov")
        merged_gcov_file=open("cov_merged")
        merged_gcov_file1=open("cov_merged1",mode='w+')
        line_gcov=gcov_file.readline()
        line_merged=merged_gcov_file.readline()
        
        while line_gcov or line_merged:
            line_gcov_spilted = line_gcov.split(":")
            line_merged_spilted = line_merged.split(":")
            if(line_gcov_spilted ==line_merged_spilted):
                #完全相同
                print("Totally same, Writing... "+line_gcov)
                merged_gcov_file1.write(line_gcov)
            elif(line_gcov_spilted[0].strip().isdecimal()):
                #执行了的代码段
                if(line_merged_spilted[0].strip().isdecimal()):
                    total_run_time = int(line_merged_spilted[0].strip())+int(line_gcov_spilted[0].strip())
                    line_merged_spilted[0]=int(line_merged_spilted[0].strip())+int(line_gcov_spilted[0].strip())
                elif(line_merged_spilted[0].strip()=="#####"):
                    line_merged_spilted[0]=line_gcov_spilted[0]
                write_line=str(line_merged_spilted[0])
                time = 0
                for part in line_merged_spilted:
                    part=str(part)
                    time+=1
                    if(time>=2):
                        write_line+=":"+part
                print("Encountering Difference, this exec's run time is "+str(line_gcov_spilted[0]) +", Before run time is "+str(int(line_merged_spilted[0])-int(line_gcov_spilted[0])))
                
                print("Writing... "+write_line)
                merged_gcov_file1.write(write_line)
            
            line_gcov=gcov_file.readline()
            line_merged=merged_gcov_file.readline()
        gcov_file.close()
        merged_gcov_file.close()
        merged_gcov_file1.close()
        source_file.close()
        os.remove(source_file.name+".gcov")
        os.remove('cov_merged')
        
        shutil.copyfile('cov_merged1','cov_merged')    
    else:
        source_file=open(source_path)
        os.system("cp *.gcov cov_merged")    
        os.remove(source_file.name+".gcov")
        source_file.close()
        
