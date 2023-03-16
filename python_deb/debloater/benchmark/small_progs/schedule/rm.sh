#!/bin/bash

current_work_dir="totinfo"
train_folder="input"

# List the files to keep
files_to_keep=(
  "dat541"
  "tc.22"
  "dat217"
  "lu56"
  "lu159"
  "lu160"
  "ad.2"
  "dat028"
  "lu295"
  "tc.99"
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
