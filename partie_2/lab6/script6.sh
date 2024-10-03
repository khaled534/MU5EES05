#!/bin/bash
max="$1"
    wget -o  $max.html http://xkcd.com/$max
    cat "$max.html" 
    #echo " $(grep -i hotlink $i | grep -o https.*jpg ) "
