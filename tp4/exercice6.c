#include <stdio.h>

#define COLS 5

int tousEgaux(int tab[][COLS], int lignes) {
    int valeur = tab[0][0];

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < COLS; j++) {
            if (tab[i][j] != valeur) {
                return 0;
            }
        }
    }

    return 1;
}

int ligneCroissante(int tab[][COLS], int lignes, int numLigne) {
    if (numLigne < 0 || numLigne >= lignes) {
        return -1;
    }

    for (int j = 0; j < COLS; j++) {
        if (tab[numLigne][j] > tab[numLigne][j + 1]) {
            return 0;
        }
    }

    return 1; 
}

int colonneNegative(int tab[][COLS], int lignes, int numColonne) {
    if (numColonne < 0 || numColonne >= COLS) {
        return -1;
    }

    for (int i = 0; i < lignes; i++) {
        if (tab[i][numColonne] >= 0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    int tab[3][COLS] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    printf("Tous égaux: %d\n", tousEgaux(tab, 3));
    printf("Ligne croissante (ligne 0): %d\n", ligneCroissante(tab, 3, 0));
    printf("Colonne négative (col 0): %d\n", colonneNegative(tab, 3, 0));

    return 0;
}