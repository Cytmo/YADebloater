import os
                
def verify(lines):
    with open('line_res.c','w') as f:
        f.writelines(lines)
    print('Verifying, restored line num: '+str(line_num_restored))
    os.system('./run.sh')
    ret = os.system('diff log_line log_function')
    if ret == 0:
        print("Success!")
        exit(0)
    else:
        print("Failed!")
        
with open('line.c','r') as f:
    # add code back line by line
    lines = f.readlines()
    line_num = 0
    line_num_restored = 0
    lines_to_write = []
    skip = False
    # get a function list which contains function start line number and end line number
    for line in lines:
        line_num +=1
        # 29985 < x < 32127 
        if 30224 < line_num < 30551:
            skip = False
        else:
            skip = True
        if '//' in line and not skip:
            # remove the "//" in line
            line = line.replace('//','')

            line_num_restored +=1
        lines_to_write.append(line)
        # 19134 27039
        if line_num==50039:
            skip = True
    verify(lines_to_write)



