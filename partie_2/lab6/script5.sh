#!/bin/bash
path="$1"
if [ -d "$1" ]
then
	echo "le chemin est valide"
else
	echo "le chemin est non valide"
fi
