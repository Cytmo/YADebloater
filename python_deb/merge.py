import os
import shutil
import subprocess
import utils
def cov_merge(source_path,run_time):
    print('Merging...'+" current run time is "+str(run_time))
    
    if(run_time!=1):
        source_file=open(source_path)
        print(source_file.name+".gcov")
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
                print("Totally same Writing... "+line_gcov)
                merged_gcov_file1.write(line_gcov)
            elif(line_gcov_spilted[0].isdecimal()):
                #执行了的代码段
                if(line_merged_spilted[0].isdecimal()):
                    line_merged_spilted[0]+=line_gcov_spilted[0]
                elif(line_merged_spilted[0]=="#####"):
                    line_merged_spilted[0]=line_gcov_spilted[0]
                write_line=line_merged_spilted[0]
                times = 0
                for part in line_merged_spilted:
                    time+=1
                    if(time>=2):
                        write_line+=":"+part
                print("Writing... "+write_line)
                merged_gcov_file1.write(write_line)
            
            line_gcov=gcov_file.readline()
            line_merged=merged_gcov_file.readline()
        gcov_file.close()
        merged_gcov_file.close()
        merged_gcov_file1.close()
        os.remove(source_file.name+".gcov")
        os.remove('cov_merged')
        
        shutil.copyfile('cov_merged1','cov_merged')    
    else:
        os.system("cp *.gcov cov_merged")    

