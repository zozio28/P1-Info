#include "ecole.h"
#include <stdio.h>
#include <string.h>

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

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// void afficherEtudiant(Etudiant e){

// }

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// void afficherTableauEtudiant(tabEtudiants tabEtudiants){

// }

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// double calculerMoyenneParEtudiant(Etudiant e){

// }

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// Etudiant meilleurEtudiant(tabEtudiants tabEtudiants){

// }

// /* Auteur : ... */
// /* Date :   ... */
// /* Résumé : ... */
// /* Entrée(s) : ... */
// /* Sortie(s) :  ...  */

// void saisirEtudiant(Etudiant* a){

// }

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