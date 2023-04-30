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
from matplotlib import pyplot as plt
from pycparserext.ext_c_generator import GnuCGenerator
from pycparserext.ext_c_parser import GnuCParser
current_work_dir = os.path.dirname(__file__)
import logging
import colorlog
from pycparser import c_parser, c_ast

import networkx as nx

class GetLog(object):
    def __init__(self):
        self.name = 'log'
        self.level = logging.DEBUG
        self.filename = 'test.log'
        logging.info("Logging to %s", self.filename)


    def get_log(self):

        #设置logger
        logging.getLogger().handlers = []
        logger = logging.getLogger(name=self.name)
        logger.setLevel(level=self.level)

        logger.handlers = []
            # 初始化handler
        stream_handler = logging.StreamHandler()
        file_handler = logging.FileHandler(filename=self.filename)

        # 设置handler等级
        stream_handler.setLevel(level=logging.INFO)
        file_handler.setLevel(level=self.level)

        # 设置日志格式
        sf_format = colorlog.ColoredFormatter(
                "%(log_color)s%(asctime)s-[line:%(lineno)d]-%(levelname)s-%(message)s",
                datefmt="%H:%M:%S",
                log_colors={
                    'DEBUG': 'cyan',
                    'INFO': 'green',
                    'WARNING': 'yellow',
                    'ERROR': 'red',
                    'CRITICAL': 'red,bg_white',
                })
        stream_handler.setFormatter(sf_format)
        sf_format = logging.Formatter("[line:%(lineno)d]-%(levelname)s-%(message)s")
        file_handler.setFormatter(sf_format)
        
        # 将handler添加到self.__logger
        logger.addHandler(stream_handler)
        logger.addHandler(file_handler)

        #返回logger
        return logger
    
logger = GetLog().get_log()


    
def parse(src):
    p = GnuCParser()
    ast = p.parse(src)
    logger.info("Generating AST for the source file...")
    with open('temp/ast.txt','w') as f:
        ast.show(buf=f,showcoord=True)

    lines = GnuCGenerator().visit(ast)

    logger.info("Rewriting the source file...")   
    with open('temp/pp.c','w') as f:
        f.write(lines)
   
   
    with open('temp/pp.c','r') as f:
        ast= p.parse(f.read())



    logger.info("Generating AST for the rewrited file...")    
    with open('temp/trans.txt', 'w') as f:
        # Define a recursive function to traverse the AST
        def traverse(node,level=0):
            # Get the line number of the C source code
            line = node.coord
            
            # Get the name of the syntax component
            name = node.__class__.__name__

            # Print the line number and syntax component name
            if(line!=None):
                f.write("{}: {}\n".format(line, name))
            # Recursively traverse the children of the node
            for child in node:
                traverse(child,level + 1)
                
        # Start the traversal at the root of the AST
        traverse(ast)
    
    
    # with open('trans.txt', 'w') as f:
    #     for node in ast:
    #         f.write("Line number: {}\n".format(node.coord))
    #         f.write("Syntax component: {}\n\n".format(node.__class__.__name__))

        
def begin_parse(filename):
    logger.info("Preprocessing %s"%filename)
    os.system("gcc -E %s -o %s"%(filename,filename+".p.c"))
    f = open(filename+".p.c",'r')
    logger.info("Parsing %s"%filename)
    parse(f.read())
    return 'temp/pp.c'









def cfg():
    with open('benchmark_results/tcas/pp.c','r') as f:
        src = f.read()
    p = GnuCParser()
    ast = p.parse(src)
    cfg = generate_cfg(ast)
    nx.draw(cfg, with_labels=True)
    # save the figure
    plt.savefig("temp/cfg.png")
    


def generate_cfg(ast):
    cfg = nx.DiGraph()
    current_node = None

    def visit_node(node):
        nonlocal current_node
        if node is None:
            return

        prev_node = current_node
        current_node = node
        if prev_node:
            cfg.add_edge(prev_node, current_node)

        for c_name, c in node.children():
            visit_node(c)

    visit_node(ast)
    return cfg




if __name__ == "__main__":
    cfg()
    # if len(sys.argv) > 1:
    #     filename  = sys.argv[1]
    # else:
    #     filename = 'grep-2.19.c'
    # # os.system("gcc -E %s -o %s"%(filename,filename+".p.c"))
    # f = open(filename+".p.c",'r')
    # parse(f.read())
    # f.close()   
    # process_labels('temp/pp.c.debloated.c')
    
    # ast = parse_file(filename, use_cpp=True,
    #         cpp_path='gcc',
    #         cpp_args=['-E', r'-Iutils/fake_libc_include'])
    # ast.show()
    pass