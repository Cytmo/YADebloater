import os
import subprocess
def execute(cmd):
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()
    return p.returncode
 
for fname in os.listdir('origin'):
    if 'log2' in fname:
        cmd = 'diff origin/'+fname+' origin/'+fname.replace('log2','log')
        ret = execute(cmd)    
        if(ret==0):
            # print("{} Verify successed!".format(fname))
            pass
        else:
            print("{} Verify failed!".format(fname))