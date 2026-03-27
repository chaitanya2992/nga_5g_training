#!/bin/bash

file="error.log"

grep "ERROR" "$file" | sed 's/ERROR //' | \
awk '{print "Date:", $1, "Time:", $2, "Message:", substr($0, index($0,$3))}'