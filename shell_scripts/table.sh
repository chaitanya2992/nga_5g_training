#! bin/bash/

echo "Enter the table number:"
read num

for i in {1..10}
do
	echo "$num * $i = $((num*i))"
done

exit 0

