    def _test():
        compile('gzip-1.2.4/gzip-1.2.4.c')
        cmd1 = 'gzip-1.2.4/deb.out -c -f < gzip-1.2.4/train/aaa.txt > output'
        ret = execute(cmd1)
        cmd2 = 'diff gzip-1.2.4/standard_output output'
        ret = execute(cmd2)
        print(ret)    
        if(ret==0):
            return PASS
        else:
            return FAIL
        # FIXME: Set up a test function that takes a set of deltas and
        # returns either self.PASS, self.FAIL, or self.UNRESOLVED.
        # if c == []:
        #     return self.PASS
        return UNRESOLVED