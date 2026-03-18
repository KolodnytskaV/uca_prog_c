#include <stdio.h>
#include <stdlib.h>

void initialiseDeuxEnDeux(int *tab, int taille, int debut) {
	for(int i = 0; i < taille; i++) {
		tab[i] = debut + 2*i; 
	}
}

void afficheTab(int *tab, int taille) {
	for(int i = 0; i < taille; i++) {
		printf("%d", tab[i]);
	}
	printf("\n");
}

int main() {
	int n, debut;
	printf("Entrez la taille du tableau: \n");
	scanf("%d", &n);
	printf("Entrez le début: \n");
	scanf("%d", &debut);
	
	int *tab = malloc(sizeof(int) * n);
	initialiseDeuxEnDeux(tab, n , debut);
	afficheTab(tab, n);
	
	
	return 0; 
}
