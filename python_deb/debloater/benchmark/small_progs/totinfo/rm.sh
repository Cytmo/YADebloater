#!/bin/bash

current_work_dir="totinfo"
train_folder="train/universe"

# List the files to keep
files_to_keep=(
    "12new44"
    "test331.inc"
    "test30.inc"
    "jk2AAX.mat"
    "test405.inc"
    "jkACF.mat"
    "tst2f.mat"
    "test70.inc"
    "jkAAW.mat"
    "test2.inc"
)

# Create an associative array with files to keep as keys
declare -A keep_files_map
for file in "${files_to_keep[@]}"; do
    keep_files_map["$file"]=1
done

# Iterate through all files in the train folder and remove the ones not in the files_to_keep array
for file in "$train_folder"/*; do
    filename=$(basename "$file")
    if [[ -z ${keep_files_map["$filename"]} ]]; then
        echo "$file"
        rm "$file"
    fi
done
