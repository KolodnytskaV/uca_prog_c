#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

int resultatEstCorrect(int resultatPropose, int numeroQuestion)
{
    int gagne; // gagne est un booleen: vaut 1 si le resultat proposé est correct, 0 sinon.
    switch(numeroQuestion)
    {
        case 1:
            // Plus petit entier pair strictement positif
            gagne=(resultatPropose==2);
            break;
        case 2:
            // Plus grand entier strictement négatif
            gagne=(resultatPropose==-1);
            break;
        case 3:
            // Prix d'une galette lorsque trois galettes valent 45 euros
            gagne=(resultatPropose==15);
            break;
        case 4:
            //Valeur maximale d'une note dans le systeme standard francais
            gagne=(resultatPropose==20);
            break;
        case 5:
            // nombre de joueurs sur le terrain dans une équipe de foot
            gagne=(resultatPropose==11);
            break;
        default:
            printf("Numero de question incorrect.\n");
            gagne=0;
    }
    return gagne; // renvoie le booléen gagne
}

int main() {
    srand(time(NULL));
    int secret = (rand()%5) + 1; 
    int resultat;

    switch(secret){
        case 1:
            printf("Question 1: Quel est le plus petit entier pair strictement positif?\n");
            break;
        case 2:
            printf("Question 2: Quel est le plus grand entier strictement négatif?\n");
            break;
        case 3:
            printf("Question 3: Bob a acheté 3 galettes des rois pour 45 euros! Combie, coûte une galette?\n");
            break;
        case 4:
            printf("Question 4: Alice a obtenu tout juste à son examen d'informatique, qui est noté selon le système standard français; Quelle note a-t-elle obtenue?\n");
            break;
        case 5:
            printf("Question 5: Combien y'a-t-il de joueurs de foot sur le terrain dans une même équipe?\n");
            break;
        default:
        printf("Erreur\n");
        return 1; 
    }

    scanf("%d", &resultat);
    if (resultatEstCorrect(resultat, secret)) {
        printf("Gagné!\n");
    } else {
        printf("Perdu!\n"); 
    }

    printf("Nombre aléatoire généré est : %d\n", secret); 
    return 0; 
}
