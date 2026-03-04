#include <stdio.h>

void echangeDernierTab(int tab[], int taille, int p) {
    if (p < 0 || p >= taille) {
        printf("Indice non valide\n");
        return; 
    }

    int temp = tab[p];
    tab[p] = tab[taille - 1];
    tab[taille - 1] = temp;
}

int main() {
    int tab[] = {10, 20, 30, 40};
    int taille = sizeof(tab) / sizeof(tab[0]);

    echangeDernierTab(tab, taille, 1);
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}