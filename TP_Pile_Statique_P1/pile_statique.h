#include <stdio.h>

//constante symbolique
#define MAX 100

//variables globales
typedef struct Pile
{
	int indiceTete;
	int tab[MAX]; //tableau de la pile
	
}PILE;

//fonctions

PILE init_PILE(void);

void affiche_PILE(PILE pile);

int PILE_estVide(PILE pile);

int PILE_estPleine(PILE pile);

PILE emPILE(PILE pile, int valeur);

PILE dePILE(PILE pile,int * ancienneValeur);

PILE saisir_PILE();
