#include "max.h"

// Fonction pour calculer la valeur maximale d'un tableau
void maxim(int t[], int n, int *max) {
    if (n <= 0) {
        *max = 0; // Si le tableau est vide, définissez max à 0
        return;
    }

    *max = t[0]; // Initialiser max avec le premier élément

    for (int i = 1; i < n; i++) {
        if (t[i] > *max) {
            *max = t[i]; // Mettre à jour max si un élément plus grand est trouvé
        }
    }
}
