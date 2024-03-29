from os import remove
import sys
import utils
import time
import re
import json
import pandas as pd
import os
current_work_dir = os.path.dirname(__file__)
logger = utils.GetLog().get_log()


# get syntax components from a trans.txt
class SyntaxComponent:
    data = {}
    label_list=[]
    def __init__(self, filename):
        self.file = filename
        with open(self.file,'r') as f:
            for line in f:
                # fix a bug that line like :6152: Asm will cause an error
                if 'Asm' in line: continue
                # a line looks like : grep-2.19.c:8:49: Constant
                line=line.strip()
                if line == "":
                    continue
                line=line.split(":")
                if(line[1]!='0'):
                    if(self.data.get(line[1]) is not None):
                        content = self.data.get(line[1])
                        content.append(line[3].strip())
                        self.data[line[1]]= content
                    else:
                        content = [] 
                        content.append(line[3].strip())
                        self.data[line[1]] = content
    # print data to a file for test use
    def print_to_file(self):
        with open(current_work_dir+'/temp/test.txt','w') as f:
            f.write(str(self.data))
    # return a line number list of C labels
    # def 
    def C_label_list(self):
        for line_number in self.data:
            if('Label' in self.data.get(line_number)):
                self.label_list.append(line_number)
        return self.label_list
    
    def if_C_label(self,line_number):
        if line_number+1 in self.label_list:
            return True
    # return a line number list of C ifs
    def C_if_list(self):
        if_list = []
        for line_number in self.data:
            if('If' in self.data.get(line_number)):
                if_list.append(line_number)
        return if_list
    
SyntaxData = ''
 
def code_remove(cov_merged_path,source_file):
    global SyntaxData
    logger.info('Parsing syntax components...')
    SyntaxData = SyntaxComponent('temp/trans.txt')
    SyntaxData.print_to_file()
    label_list = SyntaxData.C_label_list()
    logger.info('Removing code from '+cov_merged_path+'...')
    f=open(cov_merged_path)
    
    f1=json.load(f)
    f.close()
    cov_info=pd.json_normalize(f1, record_path=['files'])
    #parse cov info
    #logger.info(f['files'][0]['functions'])
    
    
    cov_merged=open(cov_merged_path)
    source_file=open(source_file,'r+')
    dest_file_name=source_file.name+".debloated.c"
    dest_file=open(dest_file_name,mode='w+')
    
    lines = source_file.readlines()
 
        
    
    logger.info('Function level remove...')
    
    # function level remove, but keep declaration
    function_declaration_lines = []
    deleted_functions = {}
    function_execution_count = {}




    for i in range(len(f1['files'][0]['functions'])):
        # logger.info(f1['files'][0]['functions'][i])
        if f1['files'][0]['functions'][i]['execution_count'] == 0 :
            logger.debug("Function "+f1['files'][0]['functions'][i]['name']+"'s exec count is 0, removing...")
            # find {
            decl_end = 0
            for j in range(f1['files'][0]['functions'][i]['start_line'],f1['files'][0]['functions'][i]['end_line']):
                if '{' in lines[j]:
                    decl_end = j
                    break
            # save deleted functions and its line number
            if(not f1['files'][0]['functions'][i]['name'] in deleted_functions): 
                deleted_functions.update({f1['files'][0]['functions'][i]['name']:[f1['files'][0]['functions'][i]['start_line'],f1['files'][0]['functions'][i]['end_line']]})
            
            start_line = f1['files'][0]['functions'][i]['start_line']
            # keep the line number of funciton declaration to preserve them in line level remove
            function_declaration_lines.append(start_line)
            
            
            end_line = f1['files'][0]['functions'][i]['end_line']
            for j in range(decl_end,end_line):
            #     if '{' in lines[j]:
            #         lines[j]='{//'+lines[j]
            #     elif '}' in lines[j]:
            #         lines[j]='}//'+lines[j]
            #     else:
                # lines[j]='//'+lines[j]
                logger.debug('Removing line '+str(j)+'...')
                lines[j]='//'+lines[j]

                
            lines[decl_end]=lines[decl_end].replace('//','')
            lines[end_line-1]=lines[end_line-1].replace('//','')
            
            
    logger.debug("Function def line:{}".format(function_declaration_lines))        
    # get function execution count
    for i in range(len(f1['files'][0]['functions'])):    
        if not f1['files'][0]['functions'][i]['name'] in deleted_functions: 
            function_execution_count.update({f1['files'][0]['functions'][i]['name']:f1['files'][0]['functions'][i]['execution_count']})   
       
    # line level remove
    logger.info('Line level remove...')
    removed_lines = []
    if_list = SyntaxData.C_if_list()
    removed_if_list = []
    logger.debug("If line:{}".format(if_list))
    for i in range(len(f1['files'][0]['lines'])):
        # logger.info(f1['files'][0]['lines'][i])

        if f1['files'][0]['lines'][i]['count'] == 0 :
            # check if its function is deleted
            if(f1['files'][0]['lines'][i]['function_name'] in deleted_functions or "//" in lines[f1['files'][0]['lines'][i]['line_number']]):
                continue
            # check if it is a if statement
            
            # use SyntaxData to check if
            logger.debug("Line "+str(f1['files'][0]['lines'][i]['line_number'])+" is not executed, checking its if...")
            
            
            
            # check if line number is in if_list
            if(str(f1['files'][0]['lines'][i]['line_number']) in if_list):
            # if(re.match('if([sS]*)',lines[f1['files'][0]['lines'][i]['line_number']].strip(), flags=0)):
                logger.debug("Found if in line "+str(f1['files'][0]['lines'][i]['line_number'])+" with line content: "+lines[f1['files'][0]['lines'][i]['line_number']])
                i = f1['files'][0]['lines'][i]['line_number']
                end_line = -1
                match_stack=[]
                labels_after_if=[]
                for j in range(i,len(lines)):
                    logger.debug(lines[j])
                    if str(j) in label_list:
                        # logger.info('Found label after if at line {}'.format(j))
                        labels_after_if.append(j)
                    if(not '{' in lines[j] and not '}' in lines[j]):
                        continue
                    if '{' in lines[j]:
                        match_stack.append('{')
                    elif '}' in lines[j]:
                        match_stack.pop()
                    if(len(match_stack)==0):
                        end_line = j
                        break
                if(end_line==-1):
                    logger.warning("Error: cannot find the end of if statement")
                    continue
                if(len(labels_after_if) != 0):
                    logger.debug("Removing if which contains label, starts at "+str(i)+", ends at "+str(labels_after_if[0]))
                    continue
                    # removed_if_list.append(i)
                    # for j in range(i+1,labels_after_if[0]):
                    #     if(not "//" in lines[j]):
                    #         logger.debug('Removing line '+str(j)+'...')
                    #         lines[j]='//'+lines[j]
                logger.debug("Removing if statement line, starts at "+str(i)+", ends at "+str(end_line))
                
                # keep the line number of removed if to remove its else{}
                removed_if_list.append(i)
 
                    
                for j in range(i+1,end_line):

                    if(not "//" in lines[j]):
                        logger.debug('Removing line '+str(j)+'...')
                        lines[j]='//'+lines[j]
                            
                else:
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
                logger.debug("Line "+str(f1['files'][0]['lines'][i]['line_number'])+" , Exec count is 0, Content is "+ lines[line_number_in_reality].strip() +" removing...")
                lines[line_number_in_reality]='//'+lines[line_number_in_reality]
                removed_lines.append(line_number_in_reality)
            # keep {} ; unchanged
            # if(';' in lines[line_number_in_reality] or '{' in lines[line_number_in_reality] or '}' in lines[line_number_in_reality]):
            #     if(not if_func_decl):
            #         chars_i_want = set('{};')
            #         final_string = ''.join(c for c in lines[line_number_in_reality] if c in chars_i_want)
            #         lines[line_number_in_reality]=final_string
                    
    # preserve function declaration
    # for i in range(len(f1['files'][0]['functions'])):
    #     # logger.info(f1['files'][0]['functions'][i])
    #     start_line = f1['files'][0]['functions'][i]['start_line']
    #     end_line = f1['files'][0]['functions'][i]['end_line']
    #     lines[start_line]=lines[start_line].replace('//','')
    
    
    
    # use removed if list to remove its else
    logger.debug(f'Removed if list: {removed_if_list}')
    for removed_if in removed_if_list:

        logger.debug(f'Removing else statement for if statement on line {removed_if}')
        # find if's else
        if_counter = 0
        else_line = None
        for i in range(removed_if, len(lines)):
            line = lines[i]
            if 'if (' in line:
                if_counter += 1
            elif 'else' in line:
                if if_counter == 1:
                    else_line = i
                    break
            if '}' in line:
                if_counter -= 1
        if else_line is not None:
            logger.debug(f'Found corresponding else statement on line {else_line}')
        else:
            logger.debug(f'No corresponding else statement found for if statement on line {removed_if}')
    
    
    # process else that has no statements
    lines_to_write,if_found_any = remove_redundant_else(lines)
    logger.info('Removing redundant else statements...')
    while(True):
        if(if_found_any):
            lines_to_write,if_found_any = remove_redundant_else(lines_to_write)
        else:
            break

    lines_to_write = preserve_label(lines_to_write,deleted_functions,f1,label_list)
    
    
    dest_file.writelines(lines_to_write)
    
    dest_file.close()
    source_file.close()
    cov_merged.close()
    
    
    
    logger.info('Code remove completed!')
    # logger.info('Total line count is '+str(total_line))
    # logger.info('Reserved line count is '+str(line_reserved))
    # logger.info('Removed line count is '+str(line_removed))
    
    return dest_file_name,deleted_functions,function_execution_count




    
def preserve_label(lines,deleted_functions,line_info,label_list):
    logger.info('Preserving labels...')
    f1 = line_info
    lines_to_write = lines.copy()
    #find label
    for i in range(len(lines)):
        if(':' in lines[i] and '//' in lines[i]):
            #if label is in deleted funcitons, skip it
            is_in_deleted_func =False
            # logger.info(deleted_functions)
            for value in deleted_functions.keys():
                #get start and end line number
                if(i>=deleted_functions[value][0] and i<=deleted_functions[value][1]):
                    is_in_deleted_func = True
            if(is_in_deleted_func):
                continue    
            logger.debug("found label in line "+str(i)+" which content is "+lines[i])
            # logger.info(label_list)
            # if( re.match('^[A-Za-z_][A-Za-z0-9_]*$', lines[i].replace(':','').replace('//','').replace(';','').strip(), flags=0)):
            # i+1 is the line number in the source file
            # skip the goto label 
            if str(i+1) in label_list:
                logger.debug("Line "+str(i)+" is a label and will be preserved, which content is "+lines[i].strip())
                if not lines[i+1].strip() == ';':
                    lines_to_write[i]=lines[i].strip().replace('//','')+";\n"
                else:
                    lines_to_write[i]=lines[i].strip().replace('//','')+"\n"
    return lines_to_write    

def check_if_label(line):
    if(':' in line):
        if( re.match('^[A-Za-z_][A-Za-z0-9_]*$', line.replace(':','').replace('//','').replace(';','').strip(), flags=0)):
            # if(SyntaxData.if_C_label(line)!=True):
            #     print("Not match at line {}".format(line))
            return True
    return False
    

def remove_redundant_else(lines,):

    # two kinds of redundant
    '''
    1. else that else {
        nothing here
    }
    
    2.
    else{} whose if has been removed, remove else
    //if{} 
    else {
        do something;
    }  
    '''
    
    lines_to_write = lines.copy()
    else_to_remove = []
    if_found_any =False
    # remove redundant else
    for i in range(len(lines)):
        end_line_down=-1
        end_line_up=-1
        if('else' in lines[i-1] and not '//' in lines[i-1]):
            # match { and }
            # search down for else body
            match_stack_down=[]
            for j in range(i,len(lines)):
                if 'if' in lines[j] and not '//' in lines[j]:
                    break
                elif '{' in lines[j]:
                    match_stack_down.append('{')
                elif '}' in lines[j]:
                    match_stack_down.pop()
                if(len(match_stack_down)==0):
                    end_line_down = j
                    break
            # search for else's if
            # match_stack_up=[]
            # j=i-1
            # while(j>=0):
            #     if '//' in lines[j]:
            #         j-=1
            #         continue
            #     elif '}' in lines[j]:
            #         j-=1
            #         match_stack_up.append('}')
            #     elif '{' in lines[j]:
            #         j-=1
            #         match_stack_up.pop()
            #     if(len(match_stack_up)==0):
            #         end_line_up = j
            #         break
        else:
            continue
        
        if(end_line_down==-1 and end_line_up == -1): # not found a redundant if/else statemtent
            continue
        if(end_line_down != -1):
            blocks_down=''
            for k in range(i,end_line_down):
                if(not '//' in lines[k]):
                    # if(not check_if_label(lines[k])):
                    if(not SyntaxData.if_C_label(k)):
                        blocks_down += lines[k]
            blocks_down = blocks_down.replace('{','')
            blocks_down = blocks_down.replace('}','')
            blocks_down = blocks_down.replace(';','').strip()
            if(blocks_down==''):
                else_to_remove.append(i)
                if_found_any = True
                for k in range(i,end_line_down+1):
                    if(not '//' in lines[k]):
                        lines_to_write[k]='//'+lines_to_write[k]
        if(end_line_up != -1):
            blocks_up=''
            for k in range(end_line_up,i):
                if(not '//' in lines[k]):
                    if(not SyntaxData.if_C_label(k)):
                        blocks_up += lines[k]
            blocks_up = blocks_up.replace('{','')
            blocks_up = blocks_up.replace('}','')
            blocks_up = blocks_up.replace(';','').strip()
            if(blocks_up==''):
                else_to_remove.append(i)
                if_found_any = True
                for k in range(end_line_up,i+1):
                    if(not '//' in lines[k]):
                        lines_to_write[k]='//'+lines_to_write[k]
    if(not len(else_to_remove)==0):
        logger.debug('Found redundant else statement, removing...')    
        for i in else_to_remove:
            lines_to_write[i-1] = '//'+lines_to_write[i-1]

    return lines_to_write,if_found_any

    

if __name__ == "__main__" :
    fp = open("print.log", "w+")
    sys.stdout = fp 	
    code_remove("./gzip-1.2.4.c.origin.c.gcov.json","gzip-1.2.4.c.origin.c")