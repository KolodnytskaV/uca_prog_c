#include <stdio.h>
int main(void) {
	int n; 
	int i = 1;
	printf("Entrez un entier n: ");
	scanf("%d", &n); 
	while (i<=n) {
		printf("%d\n", i);
		i++;
	}
	return 0;
}
