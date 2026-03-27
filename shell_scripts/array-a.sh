#!/bin/bash

declare -A fruits_color
fruits_color["apple"]="red"
fruits_color["mango"]="orange"
fruits_color["grape"]="green"
fruits_color["banana"]="yellow"

for fruit in "${!fruits_color[@]}"; do
	echo "color of $fruit is ${fruits_color[$fruit]}"
done

exit 0

