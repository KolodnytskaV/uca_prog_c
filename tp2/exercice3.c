#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    printf("Enrer un entier n:");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        printf("%d \n", i);
    }
    return 0;
}