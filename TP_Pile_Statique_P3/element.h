#ifndef ELEMENT_H 
#define ELEMENT_H


#include <stdio.h>
#include <stdlib.h>

typedef struct ELEMENT{
    char categorie;
    int numId;
} ELEMENT;


void affiche_ELEMENT(ELEMENT e);

void saisir_ELEMENT(ELEMENT* e);

void affect_ELEMENT(ELEMENT *, ELEMENT *);

int compare_ELEMENT(ELEMENT e1, ELEMENT e2);

#endif
