#!/bin/bash
max="$1"
    
    if [ -d "les_images_jusqua_"* ]; then
        rm -r les_images_jusqua_*
    fi
    
    mkdir "les_images_jusqua_$max"

    for ((i=1; i<=max; i++)); do
        wget -q -O  "$i.html" http://xkcd.com/$i
        image=$(grep -i hotlink "$i.html" | grep -o 'https.*jpg"' | grep -o 'https.*jpg') 
        wget -q -O "les_images_jusqua_$max/image_$i.jpg" "$image"
        rm "$i.html" 
    done
    
    for ((i=1; i<=max; i++)); do
        feh "les_images_jusqua_$max/image_$i.jpg" & sleep 2; kill $!
    done