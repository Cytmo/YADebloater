#!/bin/bash

# Variables for folders and files from cmds
files_to_keep=(
    "train/moni/rr19.t"
    "train/input/ruin.1035"
    "train/temp-test/2179.inp.922.1"
    "train/temp-test/282.inp.126.2"
    "train/temp-test/768.inp.329.1"
    "train/input/ruin.334"
    "train/input/ruin.1158"
    "train/temp-test/1129.inp.485.10"
    "train/temp-test/821.inp.354.1"
    "train/moni/f7.inp"
)

# Create a find command with the files to exclude
find_cmd="find train -type f"
for file in "${files_to_keep[@]}"; do
    find_cmd+=" ! -path \"$file\""
done

# Remove the remaining files
eval "$find_cmd -exec rm {} \;"