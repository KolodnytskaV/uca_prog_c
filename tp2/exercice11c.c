#include <stdio.h>
#include <math.h>

void affiche(int n, int longueur){
	int nbChiffres = (n == 0) ? 1 : (int)log10(n) + 1;
	for (int i = 0; i < longueur - nbChiffres; i++) {
		printf("0");
	}
	printf("%d", n);
}

void rectangleSommeAligne(int n, int longueur) {
	int maxSomme = n + longueur;
	int longueurMax = (maxSomme == 0) ? 1 : (int)log10(maxSomme) + 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= longueur; j++) {
			affiche(i +j, longueurMax);
			printf(" "); 
		}
		printf("\n");
	}
}

int main() {
	int n, longueur;
	printf("entrez un entier n et un entier longueur: ");
	scanf("%d %d", &n, &longueur);
	affiche(n, longueur);
	printf("\n");
	rectangleSommeAligne(n, longueur);
	return 0;
}
