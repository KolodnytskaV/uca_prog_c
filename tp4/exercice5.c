#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void majuscule(char * source, char * destination) 
{
	int i;
	while(source[i] != '\0')
	{
		if (source[i] != 'a' && source[i] <= 'z')
			destination[i] = source[i] - 32;
		else
			destination[i] = source[i];
		i++;
	}
	
	destination[i] = '\0';
}

int main(int argc, char *argv[]) 
{
	char phrase[100];
	
	if (argc != 7) 
	{
		printf("Nombre invalide de paramètres\n");
		return 0; 
	}
	
	char *prenom1 = argv[1];
	char *nom1 = argv[2];
	int age1 = atoi(argv[3]);
	
	char *prenom2 = argv[4];
	char *nom2 = argv[5];
	int age2 = atoi(argv[6]);
	
	char nom1maj[30];
	char nom2maj[30];
	
	majuscule(nom1, nom1maj);
	majuscule(nom2, nom2maj);
	
	if (age1 > age2) 
	{
		sprintf(phrase, "Le plus agé est : %s %s (%d) ans.", prenom1, nom1, age1); 
	}
	else 
	{
		sprintf(phrase, "Le plus agé est : %s %s (%d) ans.", prenom2, nom2, age2); 
	}
	
	printf("%s\n", phrase);
	
	if (strcmp(nom1maj, nom2maj) < 0)
		printf("Premier dans l'ordre alphabétique: %s\n", nom1maj);
	else 
		printf("Premier dans l'ordre alphabétique: %s\n", nom2maj);
	
	return 0; 
}
