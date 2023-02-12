import sys
from pycparser import parse_file, c_parser, c_ast

def mark_syntax_components(filename):
    # Use pycparser to parse the C source code file
    ast = parse_file(filename, use_cpp=True,
                      cpp_path='gcc',
                      cpp_args=['-E', r'-Iutils/fake_libc_include'])

    # Traverse the AST and extract information about each line
    class ComponentVisitor(c_ast.NodeVisitor):
        def __init__(self):
            self.lines = {}

        def visit(self, node):
            if hasattr(node, "coord"):
                line = node.coord.line
                if line not in self.lines:
                    self.lines[line] = []
                self.lines[line].append(node.__class__.__name__)
            self.generic_visit(node)

    visitor = ComponentVisitor()
    visitor.visit(ast)

    # Print each line of the source code along with the names of the syntax components they contain
    with open(filename) as f:
        lines = f.readlines()
        for line_number, line in enumerate(lines, 1):
            components = visitor.lines.get(line_number, [])
            print(f"Line {line_number}: {line.strip()} ({components})")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python mark_syntax_components.py <filename>")
        sys.exit(1)

    filename = sys.argv[1]
    mark_syntax_components(filename)
