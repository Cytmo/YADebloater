gcc -g -w line_res.c -o line  -D '__msan_unpoison(s,z)' -lpcre
gcc -g -w function.c -o function  -D '__msan_unpoison(s,z)' -lpcre
timeout 1 ./line "Si" train1 > log_line
timeout 1 ./function "Si" train1 > log_function
diff log_line log_function
echo $?
