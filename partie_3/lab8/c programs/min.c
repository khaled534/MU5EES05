#include "min.h"

// Fonction pour calculer la valeur maximale d'un tableau
void min(int t[], int n, int *min) {
    if (n <= 0) {
        *min = 0; // Si le tableau est vide, définissez min à 0
        return;
    }

    *min = t[0]; // Initialiser min avec le premier élément

    for (int i = 1; i < n; i++) {
        if (t[i] < *min) {
            *min = t[i]; // Mettre à jour min si un élément plus petit est trouvé
        }
    }
}
