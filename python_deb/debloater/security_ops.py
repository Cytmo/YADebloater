import utils
import json_code_remover
import os
# Import pycparser modules
from pycparser import c_parser, c_ast
from pycparserext.ext_c_generator import GnuCGenerator
from pycparserext.ext_c_parser import GnuCParser
current_work_dir = os.path.dirname(__file__)
logger = utils.GetLog().get_log()

class deb_files():
    def __init__(self,debloated_path):
        self.debloated_path = debloated_path
        with open(debloated_path) as f:
            self.lines = f.readlines()
    def write_back(self):
        with open('temp/pp.debloated.sec.c','w') as f:
            f.writelines(self.lines)
    def remove_comments(self):
        # Remove comments
        utils.copy_file(self.debloated_path,'temp/pp.c.debloated.ori.c')
        utils.remove_comments(self.debloated_path)




def begin_ops(only_remove_comments=False):

    files = deb_files('temp/pp.c.debloated.c')
    files.remove_comments()
    if only_remove_comments:
        logger.info("Comments removed")
        return
    logger.info("Beginning to add exit...")
    # parse and find empty blocks
    # Parse some C code into an AST
        # Parse the C code and obtain the AST
    parser = GnuCParser()
    logger.info("Generating AST...")
    with open('temp/pp.c.debloated.c','r') as f:
        ast = parser.parse(f.read())
    logger.info("Delete useless nodes...")
    # Traverse the AST and delete useless nodes
    for node in ast:
        # If the node is a compound statement
        if isinstance(node, c_ast.Compound):
            # Get its children nodes
            children = node.children()
            # Initialize an empty list to store modified children nodes
            new_children = []
            # Loop through the children nodes
            for child in children:
                # If the child node is not an empty compound statement
                if not (isinstance(child[1], c_ast.Compound) and not child[1].children()):
                    # Append it to the new list
                    new_children.append(child)
            # Replace the original children nodes with the new list
            node.block_items = [child[1] for child in new_children]
    reduntant_braces_visitor = ReduntantBracesVisitor()
    reduntant_braces_visitor.visit(ast)

    func_def_visitor = FuncDefNodeVisitor()
    func_def_visitor.visit(ast)

    empty_if_visitor = EmptyStmtVisitor()
    logger.info("Adding exit...")
    empty_if_visitor.visit(ast)
    # Generate the modified code and print it

    lines = GnuCGenerator().visit(ast)
    logger.info("Writing back...")
    utils.move_file('temp/pp.c.debloated.c','temp/pp.c.debloated.raw.c')
    with open('temp/pp.c.debloated.c','w') as f:
        f.writelines(lines)

class EmptyStmtVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.generator = GnuCGenerator()
    def visit_If(self, node):
        if node.iftrue and isinstance(node.iftrue, c_ast.Compound) and not node.iftrue.block_items:
            # If the iftrue block is empty or a compound with no block items, add an exit statement
            print_node = c_ast.FuncCall(c_ast.ID("printf"), 
                                        c_ast.ExprList([c_ast.Constant("string", '"Unexpected if block execute"')]))
            exit_node = c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))
            node.iftrue = c_ast.Compound([exit_node])
        self.generic_visit(node)
        
        if node.iffalse and isinstance(node.iffalse, c_ast.Compound) and not node.iffalse.block_items:
            # If the iffalse block is a compound with no block items, add an exit statement
            print_node = c_ast.FuncCall(c_ast.ID("printf"), 
                                        c_ast.ExprList([c_ast.Constant("string", '"Unexpected else block execute"')]))
            exit_node = c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))            
            node.iffalse = c_ast.Compound([exit_node]) 
        self.generic_visit(node)
    def visit_IfElse(self, node):
        if node.cond is None:
            node.iftrue = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)
    def visit_For(self, node):
        if node.cond is None:
            node.stmt = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)

    def visit_While(self, node):
        if node.cond is None:
            node.stmt = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)

    def visit_DoWhile(self, node):
        if node.cond is None:
            node.stmt = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)

    def visit_Switch(self, node):
        if node.cond is None:
            node.stmt = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)

    def visit_Case(self, node):
        if node.cond is None:
            node.stmts = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)

    def visit_Default(self, node):
        if node.cond is None:
            node.stmts = c_ast.Compound([c_ast.ExprList([c_ast.FuncCall(c_ast.ID("exit"), c_ast.ExprList([c_ast.Constant("int", "-1")]))])])
        self.generic_visit(node)
    # def visit_FuncDef(self, node):
    #     # Check if function has any statements
    #     if not node.body.block_items:
    #         # Add exit(-1); statement to function body
    #         node.body.block_items = [c_ast.FuncCall(c_ast.ID('exit'), c_ast.ExprList([c_ast.Constant('int', '-1')]))]
    # def visit_Compound(self, node):
    #     if len(node.block_items) == 1 and isinstance(node.block_items[0], c_ast.Compound):
    #         node.block_items[0].parent = node.parent
    #         node.parent.block_items.remove(node)
    #         node.parent.block_items.insert(node.parent.block_items.index(node), node.block_items[0])

# Create a subclass of the AST NodeVisitor to remove empty functions
class FuncDefNodeVisitor(c_ast.NodeVisitor):
    def visit_FuncDef(self, node):
            # Check if function has any statements
            if not node.body.block_items:
                # Add exit(-1); statement to function body
                node.body.block_items = [c_ast.FuncCall(c_ast.ID('exit'), c_ast.ExprList([c_ast.Constant('int', '-1')]))]


class ReduntantBracesVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.modified = False

    def visit_Compound(self, node):
        self.generic_visit(node)

        # Check if the compound has only one statement, which is an empty compound
        if node.block_items != None  and node.block_items[0] != None  and isinstance(node.block_items[0], c_ast.Compound):
            inner_compound = node.block_items[0]

            # Check if the inner compound is also empty
            if not inner_compound.block_items:
                # Remove the inner empty compound and mark the node as modified
                node.block_items.remove(inner_compound)
                self.modified = True

if __name__ == "__main__":
    begin_ops()
