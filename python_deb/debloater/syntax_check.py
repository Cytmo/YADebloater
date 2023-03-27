import subprocess

code = """
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
"""

# Create a temporary C file
with open('temp.c', 'w') as f:
    f.write(code)

# Compile the C code using the C compiler and redirect the error output to a file
with open('error.txt', 'w') as f:
    result = subprocess.run(['gcc', '-fsyntax-only', 'temp.c'], stderr=f)

# Check if the compilation was successful
if result.returncode == 0:
    print('No syntax errors found.')
else:
    print('Syntax errors:')
    with open('error.txt', 'r') as f:
        print(f.read())