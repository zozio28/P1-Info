#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  joueur* j1 = malloc(sizeof(joueur));
  joueur* j2 = malloc(sizeof(joueur));
  joueur* j3 = malloc(sizeof(joueur));
  joueur* j4 = malloc(sizeof(joueur));
  joueur* j5 = malloc(sizeof(joueur));
  joueur* j6 = malloc(sizeof(joueur));
  
  creationJoueur(j1);
  creationJoueur(j2);
  creationJoueur(j3);
  creationJoueur(j4);
  creationJoueur(j5);
  creationJoueur(j6);

  equipe* e1 = malloc(sizeof(equipe));
  equipe* e2 = malloc(sizeof(equipe));
  creationEquipe(e1);
  creationEquipe(e2);

  afficherEquipe(*e1);
  afficherEquipe(*e2);

  tmp = meilleurButeur(*e1);
  printf("Le meilleur buteur de l'équipe %s est : %s %s",e1->nom,tmp.nom,tmp.prenom);
  int res = compareEquipe(*e1,*e2);
  switch(res){
    case 1:
      printf("L'équipe %s est mieux classée",e1->nom);
      break;
    case 2:
      printf("L'équipe %d est mieux classée",e2->nom);
      break;
    case 0:
    printf("L'équipe %d a le même classement que %s",e1->nom,e2->nom);
    break;
  default:
  printf("ERROR");
  }

  free(j1);
  free(j2);
  free(j3);
  free(j4);
  free(j5);
  free(j6);
  free(e1);
  free(e2);
  j1 = NULL;
  j2 = NULL;
  j3 = NULL;
  j4 = NULL;
  j5 = NULL;
  j6 = NULL;
  e1 = NULL;
  e2 = NULL;

  return 0;
}