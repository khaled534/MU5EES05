#include <stdio.h>
#include "max.h"  // Inclure le fichier d'en-tête
#include "min.h"

int main() {
    // Créer et initialiser un tableau de 5 éléments
    int arr[7] = {13 , 12 , 5 , 1 , 19 , 13 , 17 };
    int max_value; // Variable pour stocker la valeur maximale
    int min_value;
    float var = 0;


    // Appeler la fonction max
    maxim(arr, 7, &max_value); // Passer l'adresse de max_value

    // Appeler la fonction min
    min(arr, 7, &min_value); // Passer l'adresse de max_value

    // Afficher le résultat
    printf("La valeur maximale du tableau est : %d\n La valeur minimale du tableau est : %d\n", max_value , min_value);

    return 0;
}
