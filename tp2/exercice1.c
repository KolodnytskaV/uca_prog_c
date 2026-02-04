#include <stdio.h>

int diagonale (int n) // Ecrit les entiers de 0 à n en formant une diagonale
{
    int i,j;
    int nbEspaces=0;
    
    for (i=0; i<=n; i++)
    {
        for (j=0; j<i; j++)
        // La boucle permet d'écrire i espaces
        {
            printf(" "); // Ecrire un espace
            nbEspaces++; // incrementation du nombre d'espaces
        }
        // Ecriture de l'entier voulu, suivi d'un retour à la ligne
        printf("%d \n",i);
        
    }
    return nbEspaces;
}

int diagonaleDecroissante (int n) // Ecrit les entiers de 0 à n en formant une diagonale
{
    int i,j;
    int nbEspaces=0;
    
    for (i=n; i>=0; i--)
    {
        for (j=0; j<n-i; j++)
        // La boucle permet d'écrire i espaces
        {
            printf(" "); // Ecrire un espace
            nbEspaces++; // incrementation du nombre d'espaces
        }
        // Ecriture de l'entier voulu, suivi d'un retour à la ligne
        printf("%d \n",i);
        
    }
    
    return nbEspaces;
}

int diagonaleInverse (int n) // Ecrit les entiers de 0 à n en formant une diagonale
{
    int i,j;
    int nbEspaces=0;
    
    for (i=n; i>=0; i--)
    {
        for (j=0; j<i; j++)
        // La boucle permet d'écrire i espaces
        {
            printf(" "); // Ecrire un espace
            nbEspaces++; // incrementation du nombre d'espaces
        }
        // Ecriture de l'entier voulu, suivi d'un retour à la ligne
        printf("%d \n",i);
        
    }
    
    return nbEspaces;
}


int main()
{
    int n, m;
    
    printf("Début du programme principal...\n");
    printf("Choisissez un entier pour la diagonale:");
    scanf("%d", &n); // Acquisition de l'entier n par la console

    m=diagonale(n);
    m=diagonaleDecroissante(n); // Lancement de la fonction diagonale, en stockant la valeur de retour dans la variable m.
    m=diagonaleInverse(n);
    printf("La diagonale a utilisé %d espaces.\n", m);
    
    printf("Fin du programme principal.\n");
    return 0;
}