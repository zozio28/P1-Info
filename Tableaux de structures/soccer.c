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
