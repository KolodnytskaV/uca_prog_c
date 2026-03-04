#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) 
{
	int i; 
	int somme = 0; 

	for(i=0; i<argc; i++)
	{
		somme += atoi(argv[i]);
	}
	printf("Somme de tous les entiers tapés est: %d\n", somme);
}

