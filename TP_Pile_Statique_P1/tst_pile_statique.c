#include <stdio.h>
#include "pile_statique.h"



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
