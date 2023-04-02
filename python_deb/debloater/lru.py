from functools import lru_cache

@lru_cache(maxsize=128)
def is_syntax_correct(code):
    """
    This function checks if the given code is syntactically correct.
    It uses an LRU cache to avoid rechecking the same code multiple times.
    """
    try:
        compile(code, "<string>", "exec")
        return True
    except SyntaxError:
        return False


print ("Hello, world!")
# This code is syntactically correct
code = "print('Hello, world!')"
print(is_syntax_correct(code))

# This code is syntactically incorrect
code = "print('Hello, world!)"
print(is_syntax_correct(code))