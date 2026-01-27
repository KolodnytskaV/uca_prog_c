#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secret = (rand()%5) + 1; 
    int resultat;

    if (secret == 1) {
        printf("Question A: Quel est le resultat?\n");
    } else if (secret == 2) {
        printf("Question B: Quel est le resultat?\n");
    } else if (secret == 3) {
        printf("Question C: Quel est le resultat?\n");
    } else if (secret == 4) {
        printf("Question D: Quel est le resultat?\n");
    } else if (secret == 5) {
        printf("Question E: Quel est le resultat?\n");
    }

    scanf("%d", &resultat);
    if (resultat==0) {
        printf("Gagné!\n");
    } else {
        printf("Perdu!\n"); 
    }

    printf("Nombre aléatoire généré est : %d\n", secret); 
    return 0; 
}
