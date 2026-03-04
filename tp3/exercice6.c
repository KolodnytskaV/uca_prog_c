#include <stdio.h>

#define N 10
#define M 5

void afficheTab(int tab[], int n) {
	for (int i = 0; i < n; i++) 
		printf("%d ", tab[i]);
	printf("\n");
}

int rechercheTab(int tab[], int n, int x) {
	int i = 0;
	while(i<n) {
		if (tab[i] == x) {
			return i;
		}
		i++;
	}
	return -1;
}

int main() {
	int  t1[N] = {1};
	int t2[M] = {1};
	
	rechercheTab(t1, N, 1);
	rechercheTab(t2, M, 4);
	
	afficheTab(t1, N);
	afficheTab(t2, M); 
	return 0; 
}
