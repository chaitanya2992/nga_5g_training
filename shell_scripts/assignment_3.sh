#!/bin/bash

no_of_lines_count() {

    if [ -f "$filename" ]; then
    	lines=$(wc -l < "$filename")
    	echo "File '$filename' has $lines lines."
    else
        echo "File '$file' does not exist."
    fi  
}

read -p "filename to print lines: " filename

no_of_lines_count $filename

exit 0
