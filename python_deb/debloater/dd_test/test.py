
from pycparser import c_ast
from pycparserext.ext_c_parser import GnuCParser
from pycparserext.ext_c_generator import GnuCGenerator
from pycparser.c_parser import ParseError
from pycparserext.ext_c_parser import GnuCParser
from pycparserext.ext_c_generator import GnuCGenerator

# Parse some C code
code = """
int foo(int x) {
  return x + 1;
}

int bar(int y) {
  return foo(y) * 2;
}

int main() {
  int a = foo(10);
  int b = bar(20);
  printf("%d %d\\n", a, b);
}
"""
parser = GnuCParser()
ast = parser.parse(code)

# Define a subclass of GnuCGenerator that removes function definitions and calls with a given name
class RemoveFunction(GnuCGenerator):
  def __init__(self, name):
    super().__init__()
    self.name = name
  
  def visit_FuncDef(self, n):
    if n.decl.name == self.name:
      return "" # Return an empty string instead of generating code for the function definition
    else:
      return super().visit_FuncDef(n) # Delegate to the base class method
  
  def visit_FuncCall(self, n):
    if n.name.name == self.name:
      return "" # Return an empty string instead of generating code for the function call
    else:
      return super().visit_FuncCall(n) # Delegate to the base class method
  
  def _generate_stmt(self, n, add_indent=False):
    # Override this method to remove statements that contain only a function call or an assignment with a function call
    if isinstance(n, c_ast.FuncCall) or (isinstance(n, c_ast.Assignment) and isinstance(n.rvalue, c_ast.FuncCall)):
      return "" # Return an empty string instead of generating code for the statement
    else:
      return super()._generate_stmt(n, add_indent) # Delegate to the base class method

# Create an instance of RemoveFunction with the name "foo"
remover = RemoveFunction("foo")

# Generate C code from the modified AST
print(remover.visit(ast))