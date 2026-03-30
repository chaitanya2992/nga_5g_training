#!/bin/bash


user=admin
pwd=1234

read -p "Username:" uname

while true; do
	read -p "Password: " inputpwd

if [ $pwd -eq $inputpwd ]; then
	echo "login success."
	exit 1

else echo "Invalid credentials."

fi
done

exit 0