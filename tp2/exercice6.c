#include <stdio.h>
int main() {
	int n;
	int i = 0;
	printf("Entrez un entier n: ");
	scanf("%d", &n);
	for(i=0; i <= 2*n; i+=2) {
		printf("%d",i);
	}
	printf("\n");
	return 0;
}
