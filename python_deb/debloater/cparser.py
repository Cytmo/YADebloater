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
import sys

# This is not required if you've installed pycparser into
# your site-packages/ with setup.py
#
sys.path.extend(['.', '..'])

from pycparser import parse_file,c_generator


def translate_to_c(filename,change_file_name=True):
    """ Simply use the c_generator module to emit a parsed AST.
    """
    ast = parse_file(filename, use_cpp=True)
    generator = c_generator.CGenerator()
    f = open(filename+".formatted.c",'w')
    f.writelines(generator.visit(ast))
    f.close()
    if(change_file_name):
        return filename+".formatted.c"
    else:
        return filename
    
if __name__ == "__main__":
    if len(sys.argv) > 1:
        filename  = sys.argv[1]
    else:
        filename = './gzip-1.2.4.c'

    translate_to_c(filename)
    
    
    # ast = parse_file(filename, use_cpp=True,
    #         cpp_path='gcc',
    #         cpp_args=['-E', r'-Iutils/fake_libc_include'])
    # ast.show()