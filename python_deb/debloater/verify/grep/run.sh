clang -g -w line.c -o line  -D '__msan_unpoison(s,z)' -lpcre
clang -g -w function.c -o function  -D '__msan_unpoison(s,z)' -lpcre
timeout 1 ./line -w "Si" train1 > log_line
timeout 1 ./function "Si" train1 > log_function
