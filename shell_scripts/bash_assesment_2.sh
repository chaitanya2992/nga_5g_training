#! /bin/bash

if [ "$UID" -eq 0 ]; then
	echo "Root User."
else 
	echo "Not Root User!."
fi
exit 0
