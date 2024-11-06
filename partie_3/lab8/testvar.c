#include <stdio.h>
#include "variance.h"

int main() {
    // Créer et initialiser un tableau de 5 éléments
    float arr[5] = {2, 5, 7, 2, 9};
    float var = 0;

    variance( arr, 5 , &var);

    printf("%f \n", var);
    return 0;
}