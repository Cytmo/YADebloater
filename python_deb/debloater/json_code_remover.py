from os import remove
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
 
        
    
    
    
    # function level remove, but keep declaration
    function_declaration_lines = []
    deleted_functions = {}
    
    for i in range(len(f1['files'][0]['functions'])):
        # print(f1['files'][0]['functions'][i])
        if f1['files'][0]['functions'][i]['execution_count'] == 0 :
            print("Function "+f1['files'][0]['functions'][i]['name']+"'s exec count is 0, removing...")
            # save deleted functions and its line number
            if(not f1['files'][0]['functions'][i]['name'] in deleted_functions): 
                deleted_functions.update({f1['files'][0]['functions'][i]['name']:[f1['files'][0]['functions'][i]['start_line'],f1['files'][0]['functions'][i]['end_line']]})
            
            start_line = f1['files'][0]['functions'][i]['start_line']
            # keep the line number of funciton declaration to preserve them in line level remove
            function_declaration_lines.append(start_line)
            
            
            end_line = f1['files'][0]['functions'][i]['end_line']
            for j in range(start_line,end_line):
            #     if '{' in lines[j]:
            #         lines[j]='{//'+lines[j]
            #     elif '}' in lines[j]:
            #         lines[j]='}//'+lines[j]
            #     else:
                # lines[j]='//'+lines[j]
                lines[j]='//'+lines[j]
            
                
            lines[start_line]=lines[start_line].replace('//','')
            lines[end_line-1]=lines[end_line-1].replace('//','')
            
            
    print(function_declaration_lines)        
            
       
    # line level remove
    

    for i in range(len(f1['files'][0]['lines'])):
        # print(f1['files'][0]['lines'][i])

        if f1['files'][0]['lines'][i]['count'] == 0 :
            # check if its function is deleted
            if(f1['files'][0]['lines'][i]['function_name'] in deleted_functions):
                continue
            # if '{' in lines[f1['files'][0]['lines'][i]['line_number']]:
            #     lines[f1['files'][0]['lines'][i]['line_number']]='{//'+lines[f1['files'][0]['lines'][i]['line_number']]
            # elif '}' in lines[f1['files'][0]['lines'][i]['line_number']]:
            #     lines[f1['files'][0]['lines'][i]['line_number']]='}//'+lines[f1['files'][0]['lines'][i]['line_number']]
            # else:

            # minus line number 1 to match the c source file line number
            line_number_in_reality = f1['files'][0]['lines'][i]['line_number']-1
            if_func_decl = f1['files'][0]['lines'][i]['line_number'] in function_declaration_lines
            if( lines[f1['files'][0]['lines'][i]['line_number']].strip()=='' or if_func_decl or "//" in lines[line_number_in_reality] ):
                continue
            else:
                print(f1['files'][0]['lines'][i])
                print("Line "+str(f1['files'][0]['lines'][i]['line_number'])+" , Exec count is 0, Content is "+ lines[line_number_in_reality].strip() +" removing...")
                lines[line_number_in_reality]='//'+lines[line_number_in_reality]
                
            # keep {} ; unchanged
            # if(';' in lines[line_number_in_reality] or '{' in lines[line_number_in_reality] or '}' in lines[line_number_in_reality]):
            #     if(not if_func_decl):
            #         chars_i_want = set('{};')
            #         final_string = ''.join(c for c in lines[line_number_in_reality] if c in chars_i_want)
            #         lines[line_number_in_reality]=final_string
                    
    # preserve function declaration
    # for i in range(len(f1['files'][0]['functions'])):
    #     # print(f1['files'][0]['functions'][i])
    #     start_line = f1['files'][0]['functions'][i]['start_line']
    #     end_line = f1['files'][0]['functions'][i]['end_line']
    #     lines[start_line]=lines[start_line].replace('//','')
    
    
    # process else that has no statements
    lines_to_write,if_found_any = remove_redundant_else(lines)
    while(True):
        if(if_found_any):
            lines_to_write,if_found_any = remove_redundant_else(lines_to_write)
        else:
            break
    lines_to_write = preserve_label(lines_to_write,deleted_functions,f1)
    
    
    dest_file.writelines(lines_to_write)
    
    dest_file.close()
    source_file.close()
    cov_merged.close()
    
    
    
    print('Code remove completed!')
    # print('Total line count is '+str(total_line))
    # print('Reserved line count is '+str(line_reserved))
    # print('Removed line count is '+str(line_removed))
    
    return dest_file_name
    
def preserve_label(lines,deleted_functions,line_info):
    f1 = line_info
    lines_to_write = lines.copy()
    #find label using regex
    for i in range(len(lines)):
        if(':' in lines[i] and '//' in lines[i]):
            #if label is in deleted funcitons, skip it
            is_in_deleted_func =False
            print(deleted_functions)
            for value in deleted_functions.keys():
                #get start and end line number
                if(i>=deleted_functions[value][0] and i<=deleted_functions[value][1]):
                    is_in_deleted_func = True
            if(is_in_deleted_func):
                continue    
            print("found label in line "+str(i)+" which content is "+lines[i])
            if( re.match('^[A-Za-z_][A-Za-z0-9_]*$', lines[i].replace(':','').replace('//','').strip(), flags=0)):
                print("Line "+str(i)+" is a label and will be preserved, which content is "+lines[i])
                lines_to_write[i]=lines[i].replace('//','')+";"
    return lines_to_write    

    
def remove_redundant_else(lines):
    lines_to_write = lines.copy()
    else_to_remove = []
    if_found_any =False
    # remove redundant else
    for i in range(len(lines)):
        end_line=-1
        if('else' in lines[i-1] and not '//' in lines[i-1]):
            # match { and }
            match_stack=[]
            for j in range(i,len(lines)):
                print(lines[j])
                if '{' in lines[j]:
                    match_stack.append('{')
                elif '}' in lines[j]:
                    match_stack.pop()
                if(len(match_stack)==0):
                    end_line = j
                    break
            print('i is '+str(i) + ' j is '+str(end_line))
        else:
            continue
        
        if(end_line==-1): # not found a redundant if/else statemtent
            continue
        else:
            blocks=''
            for k in range(i,end_line):
                if(not '//' in lines[k]):
                    blocks += lines[k]
            blocks = blocks.replace('{','')
            blocks = blocks.replace('}','')
            blocks = blocks.replace(';','').strip()
            if(blocks==''):
                else_to_remove.append(i)
                if_found_any = True
                for k in range(i,end_line+1):
                    if(not '//' in lines[k]):
                        lines_to_write[k]='//'+lines_to_write[k]
    if(not len(else_to_remove)==0):
        print('Found redundant else statement, removing...')    
        for i in else_to_remove:
            print("line number is "+ str(i))
            lines_to_write[i-1] = '//'+lines_to_write[i-1]

    return lines_to_write,if_found_any

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