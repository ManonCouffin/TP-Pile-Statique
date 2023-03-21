#ifndef PILE_STATIQUE_H  
#define PILE_STATIQUE_H


#include <stdio.h>
#include <stdlib.h>
#include "element.h"

//constante symbolique
#define MAX 100

//variables globales
typedef struct Pile
{
	int indiceTete;
	ELEMENT tab[MAX]; //tableau de la pile
	
}PILE;

//fonctions

PILE init_PILE(void);

void affiche_PILE(PILE pile);

int PILE_estVide(PILE pile);

int PILE_estPleine(PILE pile);

PILE emPILE(PILE pile, ELEMENT e);

PILE dePILE(PILE pile,ELEMENT* ancienE);

PILE saisir_PILE();

#endif
