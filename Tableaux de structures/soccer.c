#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>

struct Joueur{
  char* nom;
  char* prenom;
  char* poste;
  int num;
  int age;
  int nbButs;
}Joueur;

struct Equipe{
  char* nom;
  char* pays;
  char* championnat;
  int classement;
  int nbjoueurs;
  joueur mesJoueurs[3];
}Equipe;

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */
void creationJoueur(joueur* j){
  j = malloc(sizeof(joueur));
  j->nom = malloc(100*sizeof(char));
  j->prenom = malloc(100*sizeof(char));
  j->poste = malloc(100*sizeof(char));

  printf("Nom : ");
  scanf("%s", j->nom);
  printf("Prénom : ");
  scanf("%s", j->prenom);
  printf("Poste : ");
  scanf("%s", j->poste);
  printf("Numéro : ");
  scanf("%ls", &j->num);
  printf("Age : ");
  scanf("%ls", &j->age);
  printf("Nombre buts : ");
  scanf("%ls", &j->nbButs);
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherJoueur(joueur j){
  printf("Nom : %s", j.nom);
  printf("Prénom : %s", j.prenom);
  printf("Poste : %s", j.poste);
  printf("Numéro : %d", j.num);
  printf("Age : %d", j.age);
  printf("Nombre Buts : %d", j.nbButs);
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void creationEquipe(equipe* e){
  e = malloc(sizeof(equipe));
  e->nom = malloc(100*sizeof(char));
  e->pays = malloc(100*sizeof(char));
  e->championnat = malloc(100*sizeof(char));

  printf("Nom : ");
  scanf("%s",e->nom);
  printf("Pays : ");
  scanf("%s",e->pays);
  printf("Championnat : ");
  scanf("%s",e->championnat);
  printf("Callsement : ");
  scanf("%d",e->classement);
  e->nbjoueurs = 0;
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherEquipe(equipe e){
  printf("Nom : %s",e.nom);
  printf("Pays : %s",e.pays);
  printf("Championnat : %s",e.championnat);
  printf("Classement : %d",e.classement);
  printf("Nombre de joueurs : %d",e.nbjoueurs);

  for(int i = 0; i<e.nbjoueurs; i++){
    afficherJoueur(e.mesJoueurs[i]);
  }
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

joueur meilleurButeur(equipe e){
  joueur meilleur;
  meilleur = e.mesJoueurs[0];

  for(int i=0; i<e.nbjoueurs ; i++){
    if(meilleur.nbButs<e.mesJoueurs[i].nbButs){
      meilleur = e.mesJoueurs[i];
    }
  }
  return meilleur;
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

int compareEquipe(equipe e1,equipe e2){
  int res;
  if(e1.classement<e2.classement){
    res = 1;
  }else if(e1.classement>e2.classement){
    res = 2;
  }else if(e1.classement == e2.classement){
    res = 0;
  }else{
    res = -1;
  }
  return res;
}