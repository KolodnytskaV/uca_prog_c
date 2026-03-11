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

void afficheTab(int tab[][N]) 
{
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d", tab[i][j]);
		}
		printf("\n");
	}
}

void modifCase(int tab[][N]) 
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
	int i; 
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
	}
	return total;
}

void afficheScores(int tab[][N]) 
{
	int i;
	for (i = 0; i < N; i++) 
	{
		printf(	"Equipe %d : %d points\n", i, nbPoints(tab, i));
	}  
}

int equipeLeader(int tab[][N]) 
{
	int i;
	int maxPoints = nbPoints(tab, 0);
	int leader = 0; 
	for (i = 1; i < N; i++) 
	{
		if (nbPoints(tab, i) > maxPoints) 
		{
			leader = i; 	
		}
	}
	return leader; 
}

int nbVictoires(int tab[N][N], int numEquipe, char domOuExt) 
{
	int i = 0;
	int victoires = 0;
	for (i = 0; i < N; i++) 
	{
		if (i != numEquipe)
		{
			if (domOuExt == 'd') 
			{
				if (tab[numEquipe][i] == 1) 
				{
					victoires++;
				}
			}
			else if (domOuExt == 'e') 
			{
				if (tab[i][numEquipe] == 2)
				{
					victoires++;
				}
			}
		}
	}
	return victoires;
}

int meilleureEquipeDomicile(int tab[][N]) 
{
	int i;
	int max = nbVictoires(tab, 0, 'd');
	int meilleure = 0;
	for (i = 1; i < N; i++) 
	{
		if (nbVictoires(tab, i, 'd') > max)
		{
			max = nbVictoires(tab, i, 'd');
			meilleure = i;
		}
	}
	return meilleure;
}

int meilleureEquipeExterieur(int tab[][N])
{
	int i;
	int max = nbVictoires(tab, 0, 'e');
	int meilleure = 0;
	for (i = 1; i < N; i++) 
	{
		if (nbVictoires(tab, i, 'e') > max)
		{
			max = nbVictoires(tab, i, 'e');
			meilleure = i;
		}
	}
	return meilleure;
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
    int choix;
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
    			int equipe;
    			printf("Choisissez un numero d'équipe: ");
    			scanf("%d", &equipe);
    			printf("les points d'equipe %d: %d", equipe, nbPoints(resultat, equipe)); 
    			break;
    		case 4: 
    			afficheScores(resultat);
    			break;
    		case 5: 
    			int leader = equipeLeader(resultat);
    			printf("L'équipe ayant plus de points est l'équipe %d avec %d points\n", leader, nbPoints(resultat, leader));
    			break;
    		case 6:
    			int meilleureDomicile = meilleureEquipeDomicile(resultat);
    			printf("L'équipe %d avec %d victoires à domicile est la meilleure\n", meilleureDomicile, nbVictoires(resultat, meilleureDomicile, 'd'));
    			break;
    		case 7: 
    			int meilleureExterieur = meilleureEquipeExterieur(resultat);
    			printf("L'équipe %d avec %d victoires à l'extérieur est la meilleure\n", meilleureExterieur, nbVictoires(resultat, meilleureExterieur, 'e'));
    			break;
    		default:
    			break;
    	}
    	
    } while (choix != 0);


    printf("Au revoir\n");
    
    return 0;
}

