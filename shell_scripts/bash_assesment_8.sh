#!/bin/bash

read -p "enter filename: " fname
read -p "enter line number: " ln_num

awk "NR==$ln_num" "$fname"


exit 0
