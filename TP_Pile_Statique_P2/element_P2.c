#include <stdio.h>


typedef float ELEMENT;

void affiche_ELEMENT(ELEMENT e) {
    printf("La valeur de l'élément est : %f \n", e);
}

void saisir_ELEMENT(ELEMENT* e) {
    printf("Entrer la valeur de l'élément: ");
    scanf("%f", &(*e));
}

void affect_ELEMENT(ELEMENT *e, float value) {
    *e = value;
}

int compare_ELEMENT(ELEMENT e1, ELEMENT e2) {
    return (e1 == e2);
}


void main(void){

	ELEMENT e, element;
	float valeur;
	int resCompare;
	
	//test fonction afficher
	e=1.2;
	affiche_ELEMENT(e);
	
	//test fonction saisir
	saisir_ELEMENT(&e);
	affiche_ELEMENT(e);
	
	//test d'affectation
	valeur = 5.9;
	affect_ELEMENT(&element, valeur);
	affiche_ELEMENT(element);
	
	//test comparaison
	resCompare = compare_ELEMENT(e, element);
	
	//differents
	if(resCompare == 1){
		printf("Les 2 elements sont egaux \n");
	}
	else{
		printf("Les 2 éléments sont differents \n");
	}
	
	affect_ELEMENT(&e, valeur);
	resCompare = compare_ELEMENT(e, element);
	
	//identique
	if(resCompare == 1){
		printf("Les 2 elements sont egaux \n");
	}
	else{
		printf("Les 2 éléments sont differents \n");
	}
	
	
	
	
}
