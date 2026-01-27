#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secret = (rand()%5) + 1; 
    int resultat;

    switch(secret){
        case 1:
            printf("Question A: Quel est le resultat?\n");
            break;
        case 2:
            printf("Question B: Quel est le resultat?\n");
            break;
        case 3:
            printf("Question C: Quel est le resultat?\n");
            break;
        case 4:
            printf("Question D: Quel est le resultat?\n");
            break;
        case 5:
            printf("Question E: Quel est le resultat?\n");
            break;
        default:
        printf("Erreur\n");
        return 1; 
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