#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>



/* Auteur : Zoé */
/* Date :   19/04/2023 */
/* Résumé : Procédure qui permet de créer un joueur */
/* Entrée(s) : La variable j de la structure joueur */
/* Sortie(s) :  Demande à l'utilisateur de saisir chaque donnée  */
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

/* Auteur : Zoé */
/* Date :   19/04/2023 */
/* Résumé : Procédure qui permet d'afficher un joueur */
/* Entrée(s) : Le joueur en question */
/* Sortie(s) :  Affiche chaque variable de la structure et leurs valeurs entrée par l'utilisateur  */

void afficherJoueur(joueur j){
  printf("\n----AFFICHAGE DU JOUEUR---- \n");
  printf("Nom : %s \n", j.nom);
  printf("Prénom : %s \n", j.prenom);
  printf("Poste : %s \n", j.poste);
  printf("Numéro : %d \n", j.num);
  printf("Age : %d \n", j.age);
  printf("Nombre Buts : %d \n", j.nbButs);
}

/* Auteur : Zoé */
/* Date :   19/04/2023 */
/* Résumé : Procédure qui permet de créer une équipe */
/* Entrée(s) : La variable e de la structure equipe */
/* Sortie(s) :  Demande à l'utilisateur de saisir chaque donnée  */

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

/* Auteur : Zoé */
/* Date :19/04/2023 */
/* Résumé : Procédure qui permet d'afficher une équipe */
/* Entrée(s) : L'équipe en question */
/* Sortie(s) :  Affiche chaque variable de la structure et leurs valeurs entrée par l'utilisateur + affiche les joueurs de l'équipe  */

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

/* Auteur : Zoé */
/* Date :   19/04/2023 */
/* Résumé : Fonction qui permet de déterminer le meilleur Buteur, toute équipe confondue */
/* Entrée(s) : Les équipes en question */
/* Sortie(s) :  Le meilleur buteur parmi les joueurs  */

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

/* Auteur : Zoé */
/* Date :   19/04/2023 */
/* Résumé : Fonction qui compare le classement de chaque équipe */
/* Entrée(s) : Les équipes en question */
/* Sortie(s) :  En fonction du résultat : l'équipe avec le meilleur classement ou égalité  */

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

/* Auteur : Zoé */
/* Date :   19/04/2023 */
/* Résumé : Procédure qui permet d'ajouter un joueur à une équipe */
/* Entrée(s) : l'équipe en question et le joueur en question */
/* Sortie(s) :  Le joueur dans l'équipe  */

void ajouterJoueur(equipe* e, joueur* j){
  if (e->nbjoueurs < 3){
    e->mesJoueurs[e->nbjoueurs] = *j;
    e->nbjoueurs++;
  } else {
    printf("L'équipe a déjà le maximum de joueurs autorisés.\n");
  }
}