import os
import subprocess
def compile(source):
    print('Compiling')
    abspath = os.path.abspath(source)
    ret = subprocess.call(["gcc",abspath,"-w", "-o","gzip-1.2.4/deb.out"])
    if ret!=0:
        print('Compile Error')
        return 1
    return 0

def execute(cmd):
    p = subprocess.Popen(cmd, shell=True)
    p.communicate()
    return p.returncode    
def test(src):
    with open('temp.c', 'w') as f:
        f.write(src)
    compile('temp.c')
    if compile('gzip-1.2.4/gzip-1.2.4.c')==1:
            return True
    cmd1 = 'gzip-1.2.4/deb.out -c -f < gzip-1.2.4/train/aaa.txt > output'
    ret = execute(cmd1)
    cmd2 = 'diff gzip-1.2.4/standard_output output'
    ret = execute(cmd2)
    print(ret)    
    if(ret==0):
        return False
    else:
        return True
    # FIXME: Set up a test function that takes a set of deltas and
    # returns either self.PASS, self.FAIL, or self.UNRESOLVED.
    # if c == []:
    #     return self.PASS


def ddmin(s, test):
    n = 2     # Initial granularity
    while len(s) >= 2:
        subset_length = len(s) // n
        start = 0
        some_complement_is_failing = False

        while start < len(s):
            complement = s[:start] + s[start + subset_length:]
            if test(complement):
                s = complement
                n = max(n - 1, 2)
                some_complement_is_failing = True
                break
            start += subset_length

        if not some_complement_is_failing:
            n = min(n * 2, len(s))
            if n == len(s):
                break

    return s


with open('gzip-1.2.4/gzip-1.2.4.c') as f:
    src = f.read()
ddmin(src,test)