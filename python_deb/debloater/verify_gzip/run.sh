clang -g -w line1.c -o line
clang -g -w function.c -o function
timeout 1 ./line -cf < train/obj1 > log_line
timeout 1 ./function -cf < train/obj1 > log_function
diff log_line log_function