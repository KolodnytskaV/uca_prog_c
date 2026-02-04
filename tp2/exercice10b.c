#include <stdio.h>
void rectangleSomme(int n, int m) {
	int somme;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			somme = i + j; 
			printf("%d", somme);
			if (j < m) {
				printf(" "); 
			}
		}
		printf("\n");
	}
}

int main() {
	int n, m;
	printf("Entrez un entier n: \n");
	scanf("%d", &n);
	printf("Entrez un entier m: \n");
	scanf("%d", &m);
	rectangleSomme(n, m);
	return 0; 
}

