# # parser_file 用于处理c语言文件
# from pycparser import parse_file
# from pycparser import CParser
# # c语言有错误时，会引出此错误
# from pycparser.plyparser import ParseError
# # c_ast.py 文件下包含了抽象语法树的节点类
# from pycparser.c_ast import *


# c_file = open('../gzip-1.2.4/gzip-1.2.4.c.origin.c', 'r')
# ast = parse_file('../gzip-1.2.4/gzip-1.2.4.c.origin.c', use_cpp = True,cpp_path=)


# print(ast.ext[0])
#-------------------------------------------------------------------------------
# pycparser: using_gcc_E_libc.py
#
# Similar to the using_cpp_libc.py example, but uses 'gcc -E' instead
# of 'cpp'. The same can be achieved with Clang instead of gcc. If you have
# Clang installed, simply replace 'gcc' with 'clang' here.
#
# Eli Bendersky [https://eli.thegreenplace.net/]
# License: BSD
#-------------------------------------------------------------------------------
import os
import sys
from typing import TextIO

# This is not required if you've installed pycparser into
# your site-packages/ with setup.py
#
sys.path.extend(['.', '..'])


def test(src):

    from pycparserext.ext_c_parser import GnuCParser
    p = GnuCParser()
    ast = p.parse(src)
    with open('ast.txt','w') as f:
        ast.show(buf=f,showcoord=True)


    from pycparserext.ext_c_generator import GnuCGenerator
    lines = GnuCGenerator().visit(ast)
    with open('pp.c','w') as f:
        f.write(lines)
    
if __name__ == "__main__":
    if len(sys.argv) > 1:
        filename  = sys.argv[1]
    else:
        filename = 'grep-2.19.c'
    os.system("gcc -E %s -o %s"%(filename,filename+".p.c"))
    f = open(filename+".p.c",'r')
    test(f.read())
    
    
    # ast = parse_file(filename, use_cpp=True,
    #         cpp_path='gcc',
    #         cpp_args=['-E', r'-Iutils/fake_libc_include'])
    # ast.show()