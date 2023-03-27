#!/bin/bash

commands=(
    "python3 deb.py -s benchmark/grep/grep-2.19.c -i benchmark/grep -r"
    "python3 deb.py -s benchmark/date/date-8.21.c -i benchmark/date -r "
    "python3 deb.py -s benchmark/gzip-1.2.4/gzip-1.2.4.c -i benchmark/gzip-1.2.4 -r"
    "python3 deb.py -s benchmark/bzip2/bzip2-1.0.5.c -i benchmark/bzip2 -r"
    "python3 deb.py -s benchmark/uniq/uniq-8.16.c -i benchmark/uniq -r "
    "python3 deb.py -s benchmark/small_progs/replace/replace.c -i benchmark/small_progs/replace"
    # "python3 deb.py -s benchmark/small_progs/totinfo/totinfo.c -i benchmark/small_progs/totinfo"
    "python3 deb.py -s benchmark/small_progs/totinfo/tcas.c -i benchmark/small_progs/tcas"
)

echo "Please choose an option to run:"
for i in "${!commands[@]}"; do
    echo "$((i + 1)). ${commands[i]}"
done

read -p "Enter the number of your choice (1-${#commands[@]}): " choice

if [ "$choice" -ge 1 ] && [ "$choice" -le "${#commands[@]}" ]; then
    eval "${commands[$((choice - 1))]}"
else
    echo "Invalid choice. Please enter a number between 1 and ${#commands[@]}."
fi
