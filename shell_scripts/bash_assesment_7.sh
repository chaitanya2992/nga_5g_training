#!/bin/bash

find_square(){
	local number=$1
	result=$((number * number))
	echo "$result"

}

read -p "Enter a number to find square: " number

echo "Square of $number is $(find_square "$number")."



exit 0
