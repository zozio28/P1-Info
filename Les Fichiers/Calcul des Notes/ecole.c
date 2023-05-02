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
    char ligne[N];
    char* element;

    fichier = fopen("notes.csv","r");

    if(fichier != NULL){
        while(fgets(ligne, N, fichier) != NULL){
            element = strtok(ligne, ";");
            while (element != NULL){
                for(int i=0 ; i<5 ; i++){
                    fichierNotes[i] = *element;
                }
            }
        }
    }
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherEtudiant(Etudiant e){
    printf("------------ETUDIANT------------");
    printf("Nom : %s \n", e.nom);
    printf("Prénom : %s \n", e.prenom);
    printf("Numéro étudiant : %d \n", e.num);
    printf("Ses notes : %ls \n", e.mesNotes);
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherTableauEtudiant(tabEtudiants tabEtudiants) {
  for (int i = 0; i < 5; i++) {
    printf("| %s", lireCSV(tabEtudiants));
  }
  printf("|");
}

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

double calculerMoyenneParEtudiant(Etudiant e){
    double moy = 0;
    for(int i = 0 ; i < 5 ; i++){
        moy+=e.mesNotes[i];
    }
    return moy/5;
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

void saisirEtudiant(Etudiant* a){
    a = malloc(sizeof(Etudiant));
    a->nom = malloc(N*sizeof(char));
    a->prenom = malloc(N*sizeof(char));

    printf("\n----SAISIE DE L'ÉTUDIANT---- \n");
    printf("Nom : ");
    scanf("%s", a->nom);
    printf("Prénom : ");
    scanf("%s", a->prenom);
    printf("Numéro d'étudiant : ");
    scanf("%d", &a->num);
}

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// void ajouterEtudiant(tabEtudiants* tabEtudiants,Etudiant* a){

// }

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// void ecrireCSV(tabEtudiants* tabEtudiants,char* fichierNotes){

// }

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// void supprimerEtudiant(tabEtudiants* tabEtudiants, int num){

// }