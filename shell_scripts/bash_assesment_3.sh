#!/bin/bash

read -p "Enter a number: " number

while [ $number -le 5 ]; do
	echo $((number*number))
	
	number=$((number+1))
done
exit 0
