#include <stdio.h>
int main() {
	int n, somme = 0;
	printf("Entrez une suite d'entiers terminée par -1: \n");
	while(1) {
		scanf("%d", &n);
		if (n == -1) {
			break; 
		}
		somme += n; 
	}
	printf("La somme des entiers saisies est : %d\n", somme);
	
	return 0; 
}
