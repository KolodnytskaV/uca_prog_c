#include <stdio.h>
int somme(int n) {
	int res = 0; 
	
	for (int i = 1; i <= n; i++) {
		res += i;
	}
	return res; 
}



int main()
{
	int n;
	printf("Entrez un entier n: ");
	scanf("%d", &n);
	printf("La somme de 1 à %d est %d\n", n, somme(n));
	return 0;
}
