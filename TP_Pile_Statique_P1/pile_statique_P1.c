#include <stdio.h>

//constante symbolique
#define MAX 5

//variables globales
typedef struct Pile
{
	int indiceTete;
	int tab[MAX]; //tableau de la pile
	
}PILE;

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
			printf("%d \n ", pile.tab[i]);	
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

PILE emPILE(PILE pile, int valeur)
{
	if(PILE_estPleine(pile)== 0)
	{
		pile.indiceTete++;
		pile.tab[pile.indiceTete]=valeur;
	}
	else
	{
		printf("La pile est pleine \n");
	}
	return pile;
}

PILE dePILE(PILE pile,int * ancienneValeur)
{
	*ancienneValeur = pile.tab[pile.indiceTete];
	pile.indiceTete--;
	return pile;
}

PILE saisir_PILE(){
	int i;
	int valeur;
	PILE maPile;
	
	maPile = init_PILE();
	affiche_PILE(maPile);
	
	for(i=0;i<MAX;i++)
	{
		printf("Entrer une valeur :");
		scanf("%d", &valeur);
		maPile = emPILE(maPile, valeur);
	}
	return maPile;
}

void main(void){
	PILE maPile;
	int valeur;
	valeur = 0;

	maPile = init_PILE();
	
	printf("test affichage pile init \n");
	affiche_PILE(maPile);
	
	maPile = saisir_PILE();
	maPile = dePILE(maPile, &valeur);
	printf("La valeur en haut de la pile était de : %d \n", valeur);
	printf("Ajout d'une nouvelle valeur :");
	scanf("%d", &valeur);
	maPile = emPILE(maPile, valeur);
	
	printf("test affichage nouvelle pile \n");
	affiche_PILE(maPile);
}













