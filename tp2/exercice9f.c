#include <stdio.h>
int main() {
	int n;
	printf("Entrez un entier n: \n");
	scanf("%d", &n); 
	if (n<=0) {
		printf("Veuillez saisir un entier positif \n"); 
		return 1; 
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		
		for (int j = 1; j <= i; j ++) {
			printf("x");
		}
		printf("\n");
	}
	printf("\n");
	return 0; 
}
