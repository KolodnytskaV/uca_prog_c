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

int rechercheTab(int tab[], int n, int x) {
	int i = 0;
	while(i<n) {
		if (tab[i] == x) {
			return i;
		}
		i++;
	}
	return -1;
}

int maxPosTab1(int tab[], int taille) {
    int max = maxTab(tab, taille);
    return rechercheTab(tab, taille, max); 
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

int main() {
    int tab[] = {-3, 5, 4, 12, 1, 8};
    int taille = sizeof(tab) / sizeof(tab[0]);

    int pos1 = maxPosTab1(tab, taille);
    int pos2 = maxPosTab2(tab, taille);

    printf("Position max (method 1): %d\n", pos1);
    printf("Position max (method 2): %d\n", pos2);

    printf("Max value: %d\n", tab[pos1]);

    return 0;
}