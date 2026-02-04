#include <stdio.h>
void rectangleSommeDetails(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d + %d", i, j);
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
	rectangleSommeDetails(n, m);
	return 0; 
}

