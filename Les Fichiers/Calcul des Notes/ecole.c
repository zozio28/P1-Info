#include "ecole.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 1000

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

tabEtudiants* lireCSV(char* fichierNotes){
  FILE* fichier = NULL; 
  fichier = fopen("notes.csv", "r");
  char ligne[N];
  tabEtudiants tab;
  if (fichier != NULL){
    for(int i=0 ; i < 5 ; i++){
      while(fgets(ligne,N,fichier)!=NULL){
        tab.tabE[i] = ligne;
      }
    }
  }else{
    printf("Le fichier notes.csv n'existe pas.");
  }
  return &tab;
  fclose(fichier);
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherEtudiant(etudiant e){
    printf("------------ETUDIANT------------");
    printf("Nom : %s \n", e.nom);
    printf("Prénom : %s \n", e.prenom);
    printf("Numéro étudiant : %d \n", e.num);
    printf("Ses notes : \n");
    for(int i = 0 ; i < 5 ; i++){
      printf("- note n°%d : %d", i, e.mesNotes[i]);
    }
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherTableauEtudiant(tabEtudiants tab) {
  for(int i=0 ; i<tab.taille ; i++){
    printf("~ ETUDIANT N°%d ~ \n", i);
    afficherEtudiant(tab.tabE[i]);
  }
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

double calculerMoyenneParEtudiant(etudiant e){
  double moyenne = 0;
  for(int i = 0 ; i < 5 ; i++){
    moyenne += e.mesNotes[i];
  }
  return moyenne/5;
}

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// Etudiant meilleurEtudiant(tabEtudiants tabEtudiants){

// }

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void saisirEtudiant(etudiant* a){
    a = malloc(sizeof(etudiant));
    a->nom = malloc(N*sizeof(char));
    a->prenom = malloc(N*sizeof(char));

    printf("\n----SAISIE DE L'ÉTUDIANT---- \n");
    printf("Nom : ");
    scanf("%s", a->nom);
    printf("Prénom : ");
    scanf("%s", a->prenom);
    printf("Numéro d'étudiant : ");
    scanf("%d", &a->num);
    printf("Notes de l'étudiant : ");
    for(int i = 0 ; i < 5 ; i++){
      printf("- note n°%d : ", i);
      scanf("%d", &(a->mesNotes[i]));
    }
}

void ajouterEtudiant(tabEtudiants* tabEtudiants,etudiant* a){
  tabEtudiants->tabE[tabEtudiants->taille] = *a;
  tabEtudiants->taille++;
}

void ecrireCSV(tabEtudiants* tabEtudiants,char* fichierNotes){

}

void supprimerEtudiant(tabEtudiants* tabEtudiants, int num){
  
}