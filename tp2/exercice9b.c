#include <stdio.h>
int main() {
	int n;
	printf("Entrez un entier n: \n");
	scanf("%d", &n); 
	if (n<=0) {
		printf("Veuillez saisir un entier positif \n"); 
		return 1; 
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j ++) {
			printf("x");
		}
		printf("\n");
	}
	printf("\n");
	return 0; 
}
