import ast

def parse_ast(ast_file):
    with open(ast_file, 'r') as f:
        a = ast.parse(f.read())

    # traverse the ast and print line number and syntax component
    for node in ast.walk(a):
        print(f"Line number of C source code: {node.lineno}, Syntax component: {type(node).__name__}")

# example usage
ast_file = "ast_output.txt"
parse_ast(ast_file)