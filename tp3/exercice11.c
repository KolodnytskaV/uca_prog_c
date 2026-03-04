#include <stdio.h>

void bubbleSort(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) { //кількість проходів 
        for (int j = 0; j < taille - 1; j++) {  //проход масиву
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab [j+1];
                tab[j+1] = temp; 
            }
        }
    }
}

int main() {
    int tab[] = {5, 3, 8, 1, 2};
    int n = sizeof(tab) / sizeof(tab[0]);

    bubbleSort(tab, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}