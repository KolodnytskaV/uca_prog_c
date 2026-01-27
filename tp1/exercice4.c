#include <stdio.h>
#include <ctype.h>
int main()
{
    char  caractere='h';
    printf("Veuillez saisir un caractère : ");
    scanf("%c", &caractere);
    printf("Le code ASCII du caractère '%c' est : %d\n", caractere, caractere);
    printf("Le caractère suivant est : '%c'\n", caractere + 1);

    if(isalpha(caractere)) {
        if(isupper(caractere)) {
            printf("En minuscule, le caractère devient : '%c'\n", tolower(caractere));   
        }
        if(islower(caractere)) {
            printf("En majuscule, ce caractère devient : '%c'\n", toupper(caractere));
        }
        else {
            printf("Ce n'est pas une lettre.\n");
        }
    }
    return 0;
}