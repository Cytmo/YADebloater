import utils
import time
import re
import pycparser
def code_remove(cov_merged_path,source_file):
    print('Removing code from '+cov_merged_path+'...')
    cov_merged=open(cov_merged_path)
    source_file=open(source_file)
    dest_file_name=source_file.name+".debloated.c"
    dest_file=open(dest_file_name,mode='w+')
    
    #Skipping the gcov info part...
    line_cov=cov_merged.readline()
    dest_file.write("//"+time.strftime('%Y-%m-%d %H:%M:%S')+"\n")
    for i in range(3):
        dest_file.write("//"+line_cov)
        line_cov=cov_merged.readline()
        
    
    line_reserved=0
    line_removed=0
    total_line=0
    while line_cov:
        line_cov_spilted = line_cov.split(":")
        if(line_cov_spilted[0].strip()=="-" or line_cov_spilted[0].strip().isdigit()):
            dest_file.write(line_cov_spilted[2])
            line_reserved+=1
        elif(line_cov_spilted[0].strip()=="#####"):
            if re.search('\w+\s+?\b(\w+)\b\(',line_cov_spilted[2]):
                dest_file.write(line_cov_spilted[2])
            elif '{' in line_cov_spilted[2]:
                dest_file.write("{"+"//"+line_cov_spilted[2])
            elif '}' in line_cov_spilted[2]:
                dest_file.write("}"+"//"+line_cov_spilted[2])
            # if '{' in line_cov_spilted[2]:
            #     dest_file.write("{"+"//"+line_cov_spilted[2])
            # if '{' in line_cov_spilted[2]:
            #     dest_file.write("{"+"//"+line_cov_spilted[2])
            else:
                dest_file.write("//"+line_cov_spilted[2])
            line_removed+=1
        else:
            print("Unexpected Error at "+str(total_line)+"th line. which content is : "+str(line_cov))
        line_cov=cov_merged.readline()
        total_line+=1
    dest_file_name=dest_file.name
    dest_file.close()
    source_file.close()
    cov_merged.close()
    
    
    
    print('Code remove completed!')
    print('Total line count is '+str(total_line))
    print('Reserved line count is '+str(line_reserved))
    print('Removed line count is '+str(line_removed))
    
    return dest_file_name

if __name__ == "__main__" :
    code_remove("./cov_merged","gzip-1.2.4.c.origin.c")