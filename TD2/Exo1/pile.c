#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

pile* initialiser(int valeur){
    pile* new;
    new = malloc(1*sizeof(Element));
    (*new)->maFleche = valeur;
    return new;
}

pile empiler (pile p, int valeur){
    pile* new;
    new = initialiser(valeur);
    if (p==NULL){
        p = *new;
    }else{
        *new = p->Suivant;
        p = *new;
    }
    return p;
}

int depiler (pile* p){
    int valeur_depile;
    pile* avant_dernier;
    if(p==NULL){
        exit(EXIT_FAILURE);
    }else{
        valeur_depile = (*p)->maFleche;
        avant_dernier = p->Suivant;
        free(p);
        p = avant_dernier;
    }
    return valeur_depile;
}

void afficherP(pile p){
    if(p==NULL){
        printf("****NULL****");
    }else{
        printf("------>>> %d", p->maFleche);
        afficherP(p->Suivant);
    }
}

int compterP(pile p, int acc){
    if(p==NULL){
        return acc;
    }else{
        return compterP(p->Suivant,acc+1);
    }
}

pile inverserP(pile p1){
    int elt;
    pile* p2;
    p2 = malloc(1*sizeof(Element));
    if(p1==NULL){
        free(p1);
        return p1;
    }else{
        elt = depiler(&p1);
        *p2 = empiler(*p2,elt);
        return inverserP(p1);
    }
}

pile doublerP(pile p){

}

pile viderP (pile p){
    if(p!=NULL){
        depiler(&p);
        p = viderP(p->Suivant);
        return p;
    }else{
        return 0;
    }
}