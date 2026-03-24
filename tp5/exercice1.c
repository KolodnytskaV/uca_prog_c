#include <stdio.h>

typedef struct {
	int butEquDom;
	int butEquExt;
} score;

void afficheScore(score sco) {
	printf("Domicile: %d, Exterieur: %d\n", sco.butEquDom, sco.butEquExt);
}

void ajouteBut(score *pSurScore, char equipe) {
	if (equipe == 'd') {
		pSurScore->butEquDom++;
	} else if (equipe == 'e') {
		pSurScore->butEquExt++;
	}
}

int main () {
	score s = {3, 5};
	afficheScore(s);
	
	s.butEquDom = 10;
	printf("Après mise à jour: \n");
	afficheScore(s);
	
	ajouteBut(&s, 'e');
	printf("Après ajout d'un but à l'équipe extérieure : \n");
	afficheScore(s);
	
	return 0;
}
