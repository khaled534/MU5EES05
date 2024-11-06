#include <stdio.h>
#include "variance.h"

int main() {
    // Créer et initialiser un tableau de 5 éléments
    int arr[5] = {2, 5, 7, 2, 9};
    int var = 0;

    variance( arr, 5 , &var);

    printf("%d", var);
    return 0;
}