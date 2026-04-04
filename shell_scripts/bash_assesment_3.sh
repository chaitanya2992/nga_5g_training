#!/bin/bash

num=1
while [ $num -le 5 ]; do
	echo "Square of number $num is $((num*num))."
	
	num=$((num+1))
done
exit 0
