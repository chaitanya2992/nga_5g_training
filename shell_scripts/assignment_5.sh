#!/bin/bash
if mkdir -p "TestDir"; then
    echo "Directory 'TestDir' created or already exists."
else
    echo "Error: Cannot create directory 'TestDir'. Check permissions."
    break
fi

for i in {1..10}; do
    FILENAME="File${i}.txt"
    FILEPATH="$DIR/$FILENAME"

    if echo "$FILENAME" > "$FILEPATH"; then
        echo " File '$FILEPATH' created with content."
    else
        echo "Error: Cannot create file '$FILEPATH'. Check permissions."
		break
    fi
done
exit 0