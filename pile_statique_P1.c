#include <stdio.h>

//constante symbolique
#define MAX 5

//variables globales
typedef struct PILE
{
	int indiceTete;
	int tab[MAX]; //tableau de la pile
	
}TypePile;

//fonctions

TypePile init_PILE(void)
{
	TypePile maPile;
	maPile.indiceTete= -1; //remise à zéro de l'indice de la tete de la pile
	return maPile;
}

void affiche_PILE(TypePile pile)
{
	int i;
	if(pile.indiceTete >= 0)
	{
		for(i=0;i<=pile.indiceTete;i++)
		{
			printf("%d \n ", pile.tab[i]);	
		}
	}
	else
		printf("La pile est vide \n ");
}


int PILE_estVide(TypePile pile)
{
	if(pile.indiceTete < 0)
	{
		//printf("La pile est vide \n");	
		return -1;
	}
	else
		//printf("La pile n'est pas vide \n");	
		return 1;
}

int PILE_estPleine(TypePile pile)
{
	if(pile.indiceTete == MAX)
	{
		//printf("La pile est pleine \n");	
		return 1;
	}
	else
		//printf("La pile n'est pas pleine \n");	
		return -1;
}

TypePile emPILE(TypePile pile, int valeur)
{
	if(PILE_estPleine(pile)==-1)
	{
		pile.tab[pile.indiceTete+1]=valeur;
		pile.indiceTete++;
	}
	else
	{
		printf("La pile est pleine \n");
	}
	return pile;
}

TypePile dePILE(TypePile pile,int * ancienneValeur)
{
	*ancienneValeur=pile.tab[pile.indiceTete];
	pile.indiceTete--;
	return pile;
}

void main(void){
	TypePile maPile;
	int i;

	maPile = init_PILE();
	
	printf("test affichage pile init \n");
	affiche_PILE(maPile);
	
	maPile = emPILE(maPile, 3);
	printf("%d \n", maPile.indiceTete);
	
	printf("test affichage nouvelle pile \n");
	affiche_PILE(maPile);
	
}














