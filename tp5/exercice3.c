#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int quantite;
	int reference;
} produit;

void afficheProd(produit p) {
	printf("Reference: %d, Quantité: %d\n", p.reference, p.quantite);
}

void ajoute(produit *p, int quantite) {
	p->quantite += quantite;
}

void initialise(produit *tab, int taille) {
	for(int i = 0; i < taille; i++) {
		printf("Référence: ");
		scanf("%d", &tab[i].reference);
		printf("Quantité: ");
		scanf("%d", &tab[i].quantite);
	}
}

void afficheTabProd(produit *tab, int taille) {
	printf("====Tableau de produits====\n");
	for (int i = 0; i < taille; i++) {
		afficheProd(tab[i]);
	}
	printf("==== Fin tableau ====\n");
}

int main() {
	int n;
	printf("Nombre de produits: ");
	scanf("%d", &n);
	produit *tabProd = malloc(sizeof(produit) * n);
	initialise(tabProd, n);
	afficheTabProd(tabProd,n);
	
	return 0; 
}
