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
        
with open('line.c','r') as f:
    # add code back line by line
    lines = f.readlines()
    line_num = 0
    line_num_restored = 0
    lines_to_write = []
    skip = False
    for line in lines:
        line_num +=1
        if '//' in line and not skip:
            # remove the "//" in line
            line = line.replace('//','')

            line_num_restored +=1
        lines_to_write.append(line)
        if line_num%50000==0:
            skip = True
    verify(lines_to_write)


    

