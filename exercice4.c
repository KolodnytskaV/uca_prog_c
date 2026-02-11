#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 5

void afficheTab(int tab[], int n) {
	for (int i = 0; i < n; i++) 
		printf("%d ", tab[i]);
	printf("\n");
}

void initRandom(int tab[], int n) {
	int element= -1;
	for (int i = 0; i < n; i++) {
	element = rand()%11; //génére un nouveau nombre de 0 à 10
	tab[i] = element; 
	}	
}	
	
int main() {
	srand(time(NULL));
	int  t1[N] = {1};
	int t2[M] = {1};
	
	initRandom(t1, N);
	initRandom(t2, M);
	
	afficheTab(t1, N);
	afficheTab(t2, M); 
	return 0; 
}
