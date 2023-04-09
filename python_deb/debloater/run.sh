#!/bin/bash

commands=(
    "python3 deb.py -s benchmark/grep/grep-2.19.c -i benchmark/grep -r"
    "python3 deb.py -s benchmark/date/date-8.21.c -i benchmark/date -r "
    "python3 deb.py -s benchmark/gzip-1.2.4/gzip-1.2.4.c -i benchmark/gzip-1.2.4 -r"
    "python3 deb.py -s benchmark/bzip2/bzip2-1.0.5.c -i benchmark/bzip2 -r"
    "python3 deb.py -s benchmark/uniq/uniq-8.16.c -i benchmark/uniq -r "
    "python3 deb.py -s benchmark/small_progs/replace/replace.c -i benchmark/small_progs/replace"
    # "python3 deb.py -s benchmark/small_progs/totinfo/totinfo.c -i benchmark/small_progs/totinfo"
    "python3 deb.py -s benchmark/small_progs/tcas/tcas.c -i benchmark/small_progs/tcas"
)

echo "Please choose an option to run:"
echo "1. Run a single command"
echo "2. Run all commands"

read -p "Enter the number of your choice (1-2): " choice

if [ "$choice" -eq 1 ]; then
    for i in "${!commands[@]}"; do
        echo "$((i + 1)). ${commands[i]}"
    done
    read -p "Enter the number of the command you want to run (1-${#commands[@]}): " command_num
    if [ "$command_num" -ge 1 ] && [ "$command_num" -le "${#commands[@]}" ]; then
        command="${commands[$((command_num - 1))]}"
        echo "Running command: $command"
        eval "$command"
        # Rename the log and temp files
        log_file_name=test.log
        # c_file_name=$(basename "${command##* }" .c)
        # temp_dir_name=temp
        # temp_c_file_name=$temp_dir_name/${c_file_name}_temp.c
        # temp_tcas=${temp_dir_name}/tcas
        # mv $log_file_name ${log_file_name}_${c_file_name}
        # mv $temp_dir_name results/${temp_dir_name}_${c_file_name}
        echo "Finished running command: $command"
    else
        echo "Invalid choice. Please enter a number between 1 and ${#commands[@]}."
    fi
elif [ "$choice" -eq 2 ]; then
    for command in "${commands[@]}"; do
        echo "Running command: $command"
        eval "$command"
        # Rename the log and temp files
        log_file_name=test.log
        c_file_name=$(basename "${command##* }" .c)
        temp_dir_name=temp
        temp_c_file_name=$temp_dir_name/${c_file_name}_temp.c
        temp_tcas=${temp_dir_name}/tcas
        mv $log_file_name ${log_file_name}_${c_file_name}
        mv $temp_c_file_name ${temp_c_file_name}_${c_file_name}
        echo "Finished running command: $command"
    done
else
    echo "Invalid choice. Please enter either 1 or 2."
    fi
