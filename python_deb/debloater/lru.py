import sys
import re

class TreeNode:
    def __init__(self, data):
        self.data = data
        self.children = []

    def add_child(self, child):
        self.children.append(child)

    def __repr__(self, level=0):
        ret = "\t" * level + str(self.data) + "\n"
        for child in self.children:
            ret += child.__repr__(level + 1)
        return ret

def get_line_number(line, current_line):
    return current_line if '{' in line else None

def generate_tree_from_c_file(file_path):
    stack = []
    root = TreeNode("Root")
    current_line = 0

    with open(file_path, 'r') as file:
        for line in file:
            current_line += 1

            if '{' in line:
                line_number = get_line_number(line, current_line)
                new_node = TreeNode([str(line_number), None])
                
                if not stack:
                    root.add_child(new_node)
                else:
                    stack[-1].add_child(new_node)

                stack.append(new_node)

            elif '}' in line:
                if stack:
                    stack[-1].data[1] =  str(current_line)
                    stack.pop()

    return root

def main():

    for i in range(1,2):
        print(i)
    exit(1)
    if len(sys.argv) != 2:
        print("Usage: python script.py <path_to_c_file>")
        return

    c_file_path = sys.argv[1]
    tree = generate_tree_from_c_file(c_file_path)
    print(tree)

if __name__ == "__main__":
    main()
