#!/bin/bash
n=$(ls ../lab4/)
echo "$n"
for i in ../lab4/*; do
	if [ -d "$i" ]
	 then
		echo "$i contient{ $(ls ../lab4/$i) }"
	fi
done
