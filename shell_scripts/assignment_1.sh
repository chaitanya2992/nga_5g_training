#!bin/bash/

read -p "Enter file name to search: " filename
found=0

for file in *.sh
do
if [ $file = $filename ]; then
	found=1
	echo "File $filename found"
	break 
fi
done

if [ $found -eq 0 ]; then
	echo "File $filename not Found!."
fi

exit 0
