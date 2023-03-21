#include <stdio.h>
#include "element.h"

//fonctions

void affiche_ELEMENT(ELEMENT e) {
    printf("%d",e.numId);
    printf("%c",e.categorie);
}

void saisir_ELEMENT(ELEMENT* e) {
    printf("Entrer la valeur de votre composant: ");
    scanf("%d%c", &(e->numId),&(e->categorie));
}

void affect_ELEMENT(ELEMENT *e1, ELEMENT *e2) {
    e1->numId=e2->numId;
    e1->categorie=e2->categorie;
}

int compare_ELEMENT(ELEMENT e1, ELEMENT e2) {
    if (e1.numId==e2.numId){
    	if(e1.categorie==e2.categorie){
    		return 1;
    	}
    }
    return 0;
}
