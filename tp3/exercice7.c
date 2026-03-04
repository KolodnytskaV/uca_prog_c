#include <stdio.h> 

int maxTab(int tab[], int taille) {
    int i;
    int res = tab[0]; 
    for (i = 0; i < taille; i++) {
        if (tab[i] > res) {
            res = tab[i];
        }
    }
    return res; 
}

int maxTabPairs(int tab[], int taille) {
    int i; 
    int res;
    int found = 0;
    for (i = 0; i < taille; i++) {
        if (tab[i]%2 == 0) {
            res = tab[i];
            found = 1;
            break; 
        }
    }

    if (!found){
        return 0; 
    }

    for (i = i + 1; i < taille; i++) {
        if (tab[i] % 2 == 0 && tab[i] > res) {
            res = tab[i]; 
        }
    }
    return res; 
}

int main() {
    int tab[] = {-3, 5, 4, 12, 1, 8};
    int taille = 6;

    int max = maxTab(tab, taille);
    int maxPairs = maxTabPairs(tab, taille);

    printf("Max value: %d\n", max);
    printf("Max even value: %d\n", maxPairs);
    
    return 0; 
}