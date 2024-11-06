#include <stdio.h>
#include "max.h"  // Inclure le fichier d'en-tête
#include "min.h"
#include "variance.h"

int main() {
    // Créer et initialiser un tableau de 5 éléments
    int arr[5] = {2, 5, 7, 2, 9};
    int max_value; // Variable pour stocker la valeur maximale
    int min_value;
    float var = 0;


    // Appeler la fonction max
    maxim(arr, 5, &max_value); // Passer l'adresse de max_value

    // Appeler la fonction min
    min(arr, 5, &min_value); // Passer l'adresse de max_value

    // Appeler la fonction var
    variance(arr, 5, &var); // Passer l'adresse de max_value

    // Afficher le résultat
    printf("La valeur maximale du tableau est : %d\n La valeur minimale du tableau est : %d\n La variance du tableau est : %f\n", max_value , min_value, var);

    return 0;
}
