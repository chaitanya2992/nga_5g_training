#! /bin/bash
name='chaitanya'
echo $name
x=2
y=3
sum=$((x+y))
echo $sum

#Array
color=("blue" "red" "white" "green")
echo ${color[1]}
echo ${color[@]}

#Taking input from cli
echo "Enter name to display: "
read name
echo $name

exit 0
