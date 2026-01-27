#include <stdio.h>
int main() {
    int  n;
    printf("Veuillez saisir un entier n : ");
    scanf("%d", &n);
    if (n < 100) {
        printf("n est strictement inférieur à 100\n");
    } else {
        printf("n est supérieur ou égal à 100\n");
    }
    printf("n est égal à %d\n", n);
    return 0;
}