#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int joueur;
    int xDeb, yDeb;
    int xFin, yFin;
} coup;  //описує один хід у грі

typedef struct {
    coup *tableauCoups;
    int max;
    int prochaineCase;
} plateauJeu; //описує увесь список ходів гри


//функція ініціалізації ігрового поля, яка виділяє пам'ять під масив ходів, встановлює максимальний розмір, встановл. що поки немає жодного ходу
void initPlateauJeu(plateauJeu *p, int tailleDebut) {
    p->max = tailleDebut;
    p->tableauCoups = malloc(sizeof(coup) * tailleDebut);
    p->prochaineCase = 0;

    if (p->tableauCoups == NULL) {
        printf("Erreur allocation mémoire\n");
        exit(1); //аварійне завершення програми
    }
}


//збільшує розмір масиву у 2 рази (обчислюєновий розмір, виділяє новий масив, копіює старі елементи, звілбнює стару пам'ять, оновлює вказівкник і max)
void augmenteTaille(plateauJeu *p) {
    int nouvelleTaille = p->max * 2;

    //виділяємо новий більший масив
    coup *nouveauTableau = malloc(sizeof(coup) * nouvelleTaille);
    if (nouveauTableau == NULL) {
        printf("Erreur allocation\n");
        exit(1);
    }

    //копієюжмо всі існуючі елементи
    for (int i = 0; i < p->max; i++) {
        nouveauTableau[i] = p->tableauCoups[i];
    }

    //звілбняємо старий масив
    free(p->tableauCoups);
    
    //перенаправляємо вказівник на новий масив
    p->tableauCoups = nouveauTableau;

    //оновлюємо максимальний розмір
    p->max = nouvelleTaille;
}


//проста версія додавання нового ходу (додає хід, лише якщо є вільне місце, якщо масив заповнений - нічого не робить)
void ajouteCoup(plateauJeu *p, coup nouveauCoup) {
    if (p->prochaineCase < p->max) {
        p->tableauCoups[p->prochaineCase] = nouveauCoup;
        p->prochaineCase++;
    }
    
}

//покращена версія додавання ходу (якщо масив заповнений, то автоматично збільшу є його розмір, а потім додає новий хід)
void ajouteCoup2(plateauJeu *p, coup nouveauCoup) {
    if (p->prochaineCase >= p->max) {
        augmenteTaille(p);
    }

    p->tableauCoups[p->prochaineCase] = nouveauCoup;
    p->prochaineCase++;
}

//виведення інформації про ігрове поле (виводить кількість ходів, максимальний розмір, кількість вільних місць, список усіх ходів)
void affichePlateauJeu(plateauJeu *p) {
    printf("Nombre de coups : %d\n", p->prochaineCase);
    printf("Capacité max : %d\n", p->max);
    printf("Cases libres : %d\n\n", p->max - p->prochaineCase);

    for(int i = 0; i < p->prochaineCase; i++) {
        printf("Coup %d : Joueur %d, (%d,%d) -> (%d,%d)\n",
            i,
            p->tableauCoups[i].joueur,
            p->tableauCoups[i].xDeb,
            p->tableauCoups[i].yDeb,
            p->tableauCoups[i].xFin, 
            p->tableauCoups[i].yFin);
        }
    }


int main() {
    plateauJeu jeu;
    initPlateauJeu(&jeu, 10);

    for (int i = 0; i < 5; i++) {
        coup c;
        c.joueur = i + 1;
        c.xDeb = i;
        c.yDeb = i + 1;
        c.xFin = i + 1;
        c.yFin = i + 2;

        ajouteCoup(&jeu, c);
    }

    affichePlateauJeu(&jeu);

    free(jeu.tableauCoups);

    return 0; 
}