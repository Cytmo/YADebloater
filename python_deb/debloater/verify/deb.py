import sys


lines =''
with open(sys.argv[1], 'r') as f:

    for line in f:
        if not '//' in line:
            lines+=line
with open(sys.argv[1], 'w') as f:
    f.write(lines)