#!/bin/bash
echo "entree le premier nombre : "
read variable1
echo "entree le dexieme nombre : "
read variable2 
if [ $variable1 = $variable2 ]
then 
	echo "le nombre $variable1 est egale au nombre $variable2"
elif [ $variable1 -gt $variable2 ]
then 
	echo "le nombre $variable1 est plus grand que $variable2"
elif [ $variable1 -lt $variable2 ]
then 
	echo "le nombre $variable1 est inferieure au nombre $variable2"
fi

