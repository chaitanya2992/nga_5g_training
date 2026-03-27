#!/bin/bash
mkdir -p TestDir


for i in {1..10}; do
    filename="File${i}.txt"
    filepath="TestDir/$filename"
   
    echo "$filename contains $filename" > "$filepath"
done



exit 0
