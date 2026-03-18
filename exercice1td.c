#include <stdio.h>
#include <string.h>

typedef struct {
	char prenom[20];
	float poids;
	float taille;
} personne;

float imc(personne p) {
	return p.poids / (p.taille * p.taille);
}

void plusGrand(personne p1, personne p2) {
	if (p1.taille > p2.taille) {
		printf("%s (%f m) est plus grand que %s (%f m)", p1.prenom, p1.taille, p2.prenom, p2.taille);
	} else if (p2.taille > p1.taille) {
		printf("%s (%f m) est plus grand que %s (%f m)", p2.prenom, p2.taille, p1.prenom, p1.taille);
	}
}

void maigri(personne *p, float kiloPerdus) {
	p->poids -= kiloPerdus;
}

int main() {
	personne p1 = {"Alain", 70, 1.80};
	personne p2 = {"Benedicte", 60, 1.65};
	
	printf("IMC: %f\n", imc(p1));
	plusGrand(p1, p2);
	printf("\n");
	maigri(&p1, 5);
	printf("Nouveau poids: %f\n", p1.poids);
	return 0;
}
