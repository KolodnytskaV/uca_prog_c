#include <stdio.h>
#define colonnes 5

int maxTab2D(int tab[][colonnes], int lignes)
{
	int i, j;
	int max = tab[0][0];
	for (i = 0; i < lignes; i++)
	{
		for (j = 0; j < colonnes; j++)
		{
			if (tab[i][j] > max) 
				{
				max = tab[i][j];
				}
			
		}
	}
	return max; 
}

int main()
{
    int tableau[3][colonnes] = {
        {1, 5, 3, 4, 2},
        {7, 2, 9, 1, 6},
        {4, 8, 0, 3, 5}
    };

    int lignes = 3;
    int maximum = maxTab2D(tableau, lignes);

    printf("Le maximum du tableau est : %d\n", maximum);

    return 0;
}
