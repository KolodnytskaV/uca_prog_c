#include <stdio.h>

#define N 10
#define M 5

void afficheTab(int tab[], int n) {
	for (int i = 0; i < n; i++) 
		printf("%d ", tab[i]);
	printf("\n");
} 

int main() {
	int  t1[N] = {1};
	int t2[M] = {1};
	
	
	afficheTab(t1, N);
	afficheTab(t2, M); 
	return 0; 
}
