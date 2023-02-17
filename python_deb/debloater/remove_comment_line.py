import sys

lines_to_write = []
with open(sys.argv[1],'r') as f:

    for line in f.readlines():
        if '//' in line:
            pass
        else:
            lines_to_write.append(line)

with open(sys.argv[1],'w') as f:
    f.writelines(lines_to_write)