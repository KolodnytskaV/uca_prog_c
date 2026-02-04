#include <stdio.h>
int main() {
	int n, nombre, somme = 0;
	printf("Entrez un entier n : \n");
	scanf("%d", &n); 
	
	if (n <= 0) {
		printf("Entier doit etre positif\n");
		return 1; 
	}
	
	printf("Entrez une suite de %d entiers : \n", n);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &nombre); 
		somme += nombre;
	} 
		 
	printf("La somme de %d entiers saisies est : %d\n", n, somme);
	
	return 0; 
}
