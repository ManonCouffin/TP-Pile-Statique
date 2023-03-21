#include <stdio.h>
#include "pile_statique.h"
#include "element.h"

//fonctions

PILE init_PILE(void)
{
	PILE maPile;
	maPile.indiceTete= -1; //remise à zéro de l'indice de la tete de la pile
	return maPile;
}

void affiche_PILE(PILE pile)
{
	int i;
	if(pile.indiceTete >= 0)
	{
		for(i=0;i<=pile.indiceTete;i++)
		{
			affiche_ELEMENT(pile.tab[i]);
		}
	}
	else
		printf("La pile est vide \n ");
}


int PILE_estVide(PILE pile)
{
	if(pile.indiceTete < 0)
	{
		//printf("La pile est vide \n");	
		return 1;
	}
	else
		//printf("La pile n'est pas vide \n");	
		return 0;
}

int PILE_estPleine(PILE pile)
{
	if(pile.indiceTete == (MAX-1))
	{
		//printf("La pile est pleine \n");	
		return 1;
	}
	else
		//printf("La pile n'est pas pleine \n");	
		return 0;
}

PILE emPILE(PILE pile, ELEMENT e)
{
	if(PILE_estPleine(pile)== 0)
	{
		pile.indiceTete++;
		pile.tab[pile.indiceTete]= e;
	}
	else
	{
		printf("La pile est pleine \n");
	}
	return pile;
}

PILE dePILE(PILE pile, ELEMENT * ancienE)
{
	affect_ELEMENT(&(*ancienE), pile.tab[pile.indiceTete]);
	pile.indiceTete--;
	return pile;
}

PILE saisir_PILE(){
	int i;
	ELEMENT e;
	PILE maPile;
	
	maPile = init_PILE();
	affiche_PILE(maPile);
	
	for(i=0;i<MAX;i++)
	{
		saisir_ELEMENT(&e);
		maPile = emPILE(maPile, e);
	}
	return maPile;
}
