#!/bin/bash

fruits=("apple" "banana" "cherry")

for fruit in "${fruits[@]}"
do
	echo $fruit
done

for i in "${!fruits[@]}"
do
	echo "${fruits[i]}"
done

exit 0


