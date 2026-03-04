#include <stdio.h>
#include <stdlib.h>
#define N 5

void afficheMenu(char * prenom)
{
    printf("%s, appuyez sur n'importe quelle touche pour lancer le menu\n", prenom);
    
    /* Les deux lignes ci-dessous permettent d'attendre avant de relancer le menu.
     Les enlever si le fonctionnement est défaillant (cela dépend de la machine)*/
    char inutile;
    scanf("%c%c", &inutile, &inutile);

    printf("1. Afficher le tableau des resultats\n");
    printf("2. Modifier un resultat\n");
    printf("3. Calculer le nombre de points d'une equipe\n");
    printf("4. Afficher les scores\n");
    printf("5. Savoir quelle équipe a le plus de points\n");
    printf("6. Savoir quelle équipe a le plus de victoires à domicile\n");
    printf("7. Savoir quelle équipe a le plus de victoires à l'extérieur\n");
    printf("0. Quitter\n");
}

void afficheTab(int tan[N][N]) 
{
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d", tab[i][j]);
		}
		printf("\n");
	}
}

void modifCase(tab[][]) 
{
	int dom, ext, res;
	
	printf("Quel est le numéro de l'équipe jouant à domicile? ");
	scanf("%d", &dom);
    	printf("Quel est le numéro de l'équipe jouant à l'extérieur? ");
    	scanf("%d", &ext);
    	printf("Quel est le nouveau resultat? \n (0: match nul, 1: equipe domicile gagnante, 2: equipe exterieur gagnante)\n");
    	scanf("%d", &res);
    	
    	if (dom >= 0 && dom < N && ext >= 0 && ext < N && dom != ext) 
    	{
    		tab[dom][ext] = res; 
    	}
}

int nbPoints(int tab[N][N], int numEquipe)
{
	int total = 0; 
	int i, j; 
	for (i = 0; i < N; i++)
	{
		if (i != numEquipe)
		{
			//a domicile
			if (tab[numEquipe][i] == 1)
				total += 3;
			else if (tab[i][numEquipe] == 0)
				total += 1;
			
			//exterieur
			if (tab[i][numEquipe] == 2)
				total += 2;
			else if (tab[numEquipe] == 0)
				total += 1; 
	}
	return total;
}

int main()
{
    
    int resultat[N][N]={{0, 1, 1, 2, 0},
                        {2, 0, 1, 1, 1},
                        {1, 1, 0, 2, 2},
                        {2, 1, 1, 0, 0},
                        {0, 0, 1, 2, 0}};
                        
    /* 
    
    printf("L'équipe ayant le plus de points est l'équipe %d avec %d points\n", A COMPLETER);
    
    printf("L'équipe %d avec %d victoires à domicile est la meilleure dans ces conditions\n", A COMPLETER);
    
    printf("L'équipe %d avec %d victoires à l'exterieur est la meilleure dans ces conditions\n", A COMPLETER );
    */
    
    char prenom[20];
    printf("Bienvenue, quel est votre nom ? ");
    scanf("%s", prenom);
    
    do {
    	afficheMenu(prenom);
    	printf("Votre choix: ");
    	scanf("%d", &choix);
    	
    	switch(choix){
    		case 0:
    			break; 
    		case 1:
    			afficheTab(resultat);
    			break; 
    		case 2: 
    			modifCase(resultat); 
    			break; 
    		case 3:
    		{
    			int equipe;
    			printf("Choisissez un numero d'équipe: ");
    			scanf("%d", &equipe);
    			printf("les points d'equipe %d: %d", equipe, nbPoints(resultat, equipe); 
    		}
    			break;
    		default:
    			break;
    	}
    	
    } while (choix != 0);


    printf("Au revoir\n");
    
    return 0;
}

