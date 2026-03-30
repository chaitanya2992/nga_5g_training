#!/bin/bash

read -p "Enter a number: " num
if [ $num -gt 0 ]; then
	echo "Number is Positive"
fi
if [ $num -lt 0 ]; then
	echo "Nuumber is Negative"
fi
if [ $num -eq 0 ]; then
	echo "Number is zero."
fi

exit 0
