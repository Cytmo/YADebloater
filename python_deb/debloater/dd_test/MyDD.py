# $Id: MyDD.py,v 1.1 2001/11/05 19:53:33 zeller Exp $
# Template for adapting delta debugging.  Areas to customize are
# tagged with `FIXME'.
import os
import DD
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



class MyDD(DD.DD):
    def __init__(self):
        DD.DD.__init__(self)

    def _test(self, deltas):
        if compile('gzip-1.2.4/gzip-1.2.4.c')==1:
            return self.PASS
        cmd1 = 'gzip-1.2.4/deb.out -c -f < gzip-1.2.4/train/aaa.txt > output'
        ret = execute(cmd1)
        cmd2 = 'diff gzip-1.2.4/standard_output output'
        ret = execute(cmd2)
        print(ret)    
        if(ret==0):
            return self.FAIL
        else:
            return self.PASS
        # FIXME: Set up a test function that takes a set of deltas and
        # returns either self.PASS, self.FAIL, or self.UNRESOLVED.
        # if c == []:
        #     return self.PASS
        return self.UNRESOLVED


if __name__ == '__main__':
    deltas = []
    index = 1
    for character in open('gzip-1.2.4/gzip-1.2.4.c').read():
        deltas.append((index, character))
        index = index + 1
    # FIXME: Insert your deltas here

    mydd = MyDD()

    print("Simplifying failure-inducing input...")
    c = mydd.ddmin(deltas)  # Invoke DDMIN
    print("The 1-minimal failure-inducing input is", c)
    print("Removing any element will make the failure go away.")
    print()

    # print("Isolating the failure-inducing difference...")
    # (c, c1, c2) = mydd.dd(deltas)  # Invoke DD
    # print("The 1-minimal failure-inducing difference is", c)
    # print(c1, "passes,", c2, "fails")

# Local Variables:
# mode: python
# End: