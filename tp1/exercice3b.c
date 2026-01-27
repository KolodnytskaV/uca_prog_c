#include <stdio.h>

int main() {
    int a, b, c;
    float moyenne; 

    printf("Entrer 3 nombres : ");
    scanf("%d %d %d", &a, &b, &c);
    moyenne = (a + b + c) / 3;

    //la moyenne avec tous les chiffres significatifs calculés
    printf("La moyenne est %f\n", moyenne);

    int moyenne_entiere = (int)((a + b + c) * 100 / 3);
    //la moyenne avec des zéros parasites
    printf("La moyenne est : %f\n", moyenne_entiere/100.0);

    //la moyenne avec deux chiffres après la virgule 
    printf("La moyenne avec deux chiffres apres la virgule est %.2f\n", moyenne); 

    return 0;
}