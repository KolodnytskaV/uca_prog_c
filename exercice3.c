#include <stdio.h>

#define N 10
#define M 5

void afficheTab(int tab[], int n) {
	for (int i = 0; i < n; i++) 
		printf("%d ", tab[i]);
	printf("\n");
} 

void initClavier(int tab[], int n) {
	int element = -1;
	for (int i = 0; i < n; i++) {
		printf("Entier suivant (positif): ");
		scanf("%d", &element);
		while(element<0) {
			printf("La saisie incorrecte. L'entier est négatif. Recommencez");
			scanf("%d", &element); 
		}
		tab[i]=element; 
	}
}


int main() {
	int  t1[N] = {1};
	int t2[M] = {1};
	
	initClavier(t1, N);
	initClavier(t2, M);
	
	afficheTab(t1, N);
	afficheTab(t2, M); 
	return 0; 
}
