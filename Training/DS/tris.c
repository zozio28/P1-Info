#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */
void triRapide(int* monTab, int pas, int taille){
  int q;
  if(pas<taille){
    q = partitionner(monTab, pas, taille);
    triRapide(monTab, pas, q);
    triRapide(monTab, q+1, taille);
  }
}

partitionner(int* monTab, int pas, int taille){
  int pivot = monTab[pas];
  int i = pas - 1;
  int j = taille + 1;
  while(i<j){
    do{
      j = j-1;
    }while(monTab[j]>pivot);
    do{
      i = i +1;
    }while(monTab[i]<pivot);
    if(i<j){
      echange(monTab, i , j);
    }
  }
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */
void triFusion(int* monTab, int pas, int taille){
  int milieu = pas + (taille - pas);
  if ((taille - pas) > 1){
    milieu = (pas + taille)/2;
    triFusion(monTab, pas, milieu);
    triFusion(monTab, milieu, taille);
    fusionner(monTab, pas, milieu, taille);
  }
}

fusionner(int* monTab, int monDebut, int monMilieu, int maFin){
  int i = 0;
  int j = 0;
  
  int* tab1 = copiertableau(monTab,monDebut,monMilieu);
  int* tab2 = copiertableau(monTab,monMilieu,maFin);

  int long1 = monMilieu - monDebut;
  int long2 = maFin - monMilieu;

  while(i<long1 && j<long2){
    if(monTab[i]<monTab[j]){
      monTab[monDebut+i+j] = tab1[i];
      i++;
    }else{
      monTab[monDebut+i+j] = tab2[j];
      j++;
    }
  }

  while(i<long1){
    monTab[monDebut+i+j]=tab1[i];
    i++;
  }

  while(j<long2){
    monTab[monDebut+i+j]=tab2[j];
    j++;
  }
}