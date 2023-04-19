#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>



/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */
void creationJoueur(joueur** j){
  *j = malloc(sizeof(joueur));
  (*j)->nom = malloc(100*sizeof(char));
  (*j)->prenom = malloc(100*sizeof(char));
  (*j)->poste = malloc(100*sizeof(char));

  printf("\n----CREATION DU JOUEUR---- \n");
  printf("Nom : ");
  scanf("%s", (*j)->nom);
  printf("Prénom : ");
  scanf("%s", (*j)->prenom);
  printf("Poste : ");
  scanf("%s", (*j)->poste);
  printf("Numéro : ");
  scanf("%d", &(*j)->num);
  printf("Age : ");
  scanf("%d", &(*j)->age);
  printf("Nombre buts : ");
  scanf("%d", &(*j)->nbButs);
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherJoueur(joueur j){
  printf("\n----AFFICHAGE DU JOUEUR---- \n");
  printf("Nom : %s \n", j.nom);
  printf("Prénom : %s \n", j.prenom);
  printf("Poste : %s \n", j.poste);
  printf("Numéro : %d \n", j.num);
  printf("Age : %d \n", j.age);
  printf("Nombre Buts : %d \n", j.nbButs);
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void creationEquipe(equipe** e){
  *e = malloc(sizeof(equipe));
  (*e)->nom = malloc(100*sizeof(char));
  (*e)->pays = malloc(100*sizeof(char));
  (*e)->championnat = malloc(100*sizeof(char));

  printf("\n----CREATION DE L'EQUIPE---- \n");
  printf("Nom : ");
  scanf("%s",(*e)->nom);
  printf("Pays : ");
  scanf("%s",(*e)->pays);
  printf("Championnat : ");
  scanf("%s",(*e)->championnat);
  printf("Classement : ");
  scanf("%d",&(*e)->classement);
  (*e)->nbjoueurs = 0;
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherEquipe(equipe e){
  printf("\n----AFFICHAGE DE L'EQUIPE---- \n");
  printf("Nom : %s \n",e.nom);
  printf("Pays : %s \n",e.pays);
  printf("Championnat : %s \n",e.championnat);
  printf("Classement : %d \n",e.classement);
  printf("Nombre de joueurs : %d \n",e.nbjoueurs);

  for(int i = 0; i<e.nbjoueurs; i++){
    afficherJoueur(e.mesJoueurs[i]);
  }
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

joueur* meilleurButeur(equipe e){
  joueur* meilleur;
  meilleur = &e.mesJoueurs[0];

  for(int i=0; i<e.nbjoueurs ; i++){
    if(meilleur->nbButs<e.mesJoueurs[i].nbButs){
      meilleur = &e.mesJoueurs[i];
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

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void ajouterJoueur(equipe* e, joueur* j){
  if (e->nbjoueurs < 3){
    e->mesJoueurs[e->nbjoueurs] = *j;
    e->nbjoueurs++;
  } else {
    printf("L'équipe a déjà le maximum de joueurs autorisés.\n");
  }
}