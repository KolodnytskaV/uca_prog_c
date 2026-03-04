#include <stdio.h>

void echange(int tab[], int i, int j) {
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

int maxPosTab2(int tab[], int taille){
    int i;
    int posMax = 0; 
    for (i = 1; i < taille; i++) {
        if (tab[i] > tab[posMax]) {
            posMax = i;
        }
    }
    return posMax; 
}

void triSelectionMax(int tab[], int taille) {
    int n = taille; 
    while(n > 1) {
        int posMax = maxPosTab2(tab, n);
        echange(tab, posMax, n - 1); 
        n--; 
    }
}

int main() {
    int tab[] = {5, 3, 8, 1, 2};
    int taille = 5; 
    triSelectionMax(tab, taille);

    printf("Tableau trié : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}