import sys
import utils
import time
import re
import json
import pandas as pd
def code_remove(cov_merged_path,source_file):
    print('Removing code from '+cov_merged_path+'...')
    f=open(cov_merged_path)
    
    f1=json.load(f)
    f.close()
    cov_info=pd.json_normalize(f1, record_path=['files'])
    #parse cov info
    #print(f['files'][0]['functions'])
    
    
    cov_merged=open(cov_merged_path)
    source_file=open(source_file,'r+')
    dest_file_name=source_file.name+".debloated.c"
    dest_file=open(dest_file_name,mode='w+')
    
    lines = source_file.readlines()
    
    
    
    
    # line level remove
    # for i in range(len(f1['files'][0]['lines'])):
    #     print(f1['files'][0]['lines'][i])
    #     if f1['files'][0]['lines'][i]['count'] == 0 :
    #         print("Line "+str(f1['files'][0]['lines'][i]['line_number'])+" , Exec count is 0, removing...")
    #         # if '{' in lines[f1['files'][0]['lines'][i]['line_number']]:
    #         #     lines[f1['files'][0]['lines'][i]['line_number']]='{//'+lines[f1['files'][0]['lines'][i]['line_number']]
    #         # elif '}' in lines[f1['files'][0]['lines'][i]['line_number']]:
    #         #     lines[f1['files'][0]['lines'][i]['line_number']]='}//'+lines[f1['files'][0]['lines'][i]['line_number']]
    #         # else:
    #         lines[f1['files'][0]['lines'][i]['line_number']]='//'+lines[f1['files'][0]['lines'][i]['line_number']]

    # function level remove, but keep declaration
    for i in range(len(f1['files'][0]['functions'])):
        # print(f1['files'][0]['functions'][i])
        if f1['files'][0]['functions'][i]['execution_count'] == 0 :
            print("Function "+f1['files'][0]['functions'][i]['name']+"'s exec count is 0, removing...")
            start_line = f1['files'][0]['functions'][i]['start_line']
            end_line = f1['files'][0]['functions'][i]['end_line']
            for j in range(start_line,end_line-1):
            #     if '{' in lines[j]:
            #         lines[j]='{//'+lines[j]
            #     elif '}' in lines[j]:
            #         lines[j]='}//'+lines[j]
            #     else:
                lines[j]='//'+lines[j]
            lines[start_line]=lines[start_line].replace('//','')
            lines[end_line-1]=lines[end_line-1].replace('//','')
    dest_file.writelines(lines)
    
    
    
    
    
    
    dest_file.close()
    source_file.close()
    cov_merged.close()
    
    
    
    print('Code remove completed!')
    # print('Total line count is '+str(total_line))
    # print('Reserved line count is '+str(line_reserved))
    # print('Removed line count is '+str(line_removed))
    
    return dest_file_name
    
    
    
    
    
    # cov_merged=open(cov_merged_path)
    # source_file=open(source_file)
    # dest_file_name=source_file.name+".debloated.c"
    # dest_file=open(dest_file_name,mode='w+')
    
    # #Skipping the gcov info part...
    # line_cov=cov_merged.readline()
    # dest_file.write("//"+time.strftime('%Y-%m-%d %H:%M:%S')+"\n")
    # for i in range(3):
    #     dest_file.write("//"+line_cov)
    #     line_cov=cov_merged.readline()
        
    
    # line_reserved=0
    # line_removed=0
    # total_line=0
    # while line_cov:
    #     line_cov_spilted = line_cov.split(":")
    #     if(line_cov_spilted[0].strip()=="-" or line_cov_spilted[0].strip().isdigit()):
    #         dest_file.write(line_cov_spilted[2])
    #         line_reserved+=1
    #     elif(line_cov_spilted[0].strip()=="#####"):
    #         if re.search('\w+\s+?\b(\w+)\b\(',line_cov_spilted[2]):
    #             dest_file.write(line_cov_spilted[2])
    #         elif '{' in line_cov_spilted[2]:
    #             dest_file.write("{"+"//"+line_cov_spilted[2])
    #         elif '}' in line_cov_spilted[2]:
    #             dest_file.write("}"+"//"+line_cov_spilted[2])
    #         # if '{' in line_cov_spilted[2]:
    #         #     dest_file.write("{"+"//"+line_cov_spilted[2])
    #         # if '{' in line_cov_spilted[2]:
    #         #     dest_file.write("{"+"//"+line_cov_spilted[2])
    #         else:
    #             dest_file.write("//"+line_cov_spilted[2])
    #         line_removed+=1
    #     else:
    #         print("Unexpected Error at "+str(total_line)+"th line. which content is : "+str(line_cov))
    #     line_cov=cov_merged.readline()
    #     total_line+=1
    # dest_file_name=dest_file.name
    # dest_file.close()
    # source_file.close()
    # cov_merged.close()
    
    
    
    # print('Code remove completed!')
    # print('Total line count is '+str(total_line))
    # print('Reserved line count is '+str(line_reserved))
    # print('Removed line count is '+str(line_removed))
    
    # return dest_file_name

if __name__ == "__main__" :
    fp = open("print.log", "w+")
    sys.stdout = fp 	
    code_remove("./gzip-1.2.4.c.origin.c.gcov.json","gzip-1.2.4.c.origin.c")