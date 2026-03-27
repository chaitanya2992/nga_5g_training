#!/bin/bash

read -p "filename: " filename
read -p "Oldtext: " Oldtext
read -p "Newtext: " Newtext

sed "s/$Oldtext/$Newtext/g" $filename > "${filename}_output.log"

exit 0

