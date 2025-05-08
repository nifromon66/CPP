#!/bin/bash

file1="$1"
file2="$2"

diff <(sed 's/^\[[^]]*\] //' "$file1") <(sed 's/^\[[^]]*\] //' "$file2")

if [ $? -eq 0 ]; then
    echo "✅ The files are identical (excluding timestamps)"
else
    echo "❌ The files are different"
fi