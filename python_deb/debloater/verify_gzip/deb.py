lines =''
with open('function.c', 'r') as f:

    for line in f:
        if not '//' in line:
            lines+=line
with open('function1.c', 'w') as f:
    f.write(lines)