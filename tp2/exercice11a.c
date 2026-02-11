#include <stdio.h>

void ChiffreParChiffre(int n){
	while(n>0) {
		int chiffre = n%10;
		printf("%d\n", chiffre);
		n/=10;
	}
}

int nbChiffres(int n){
	int taille = 0;
	while(n>0) {
		taille++;
		n/=10;
	}
	return taille;
}

int main(){
	int n = 0;
	printf("Entrer un entier n: ");
	scanf("%d\n", &n);
	ChiffreParChiffre(n);
	printf("Le nombre de chiffres dans l'écriture de n en base 10: %d ", nbChiffres(n));
	return 0;
}
