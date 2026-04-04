#!/bin/bash

declare -A employees

read -p "how many employees: " num

for((i=0; i<$num; i++)); do
	read -p "enter id: " id
	read -p "enter name: " name
	employees[$id]=$name

done
exit 0
