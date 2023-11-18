#ifndef __ecole_H_
#define __ecole_H_

struct etudiant{
    char* nom;
    char* prenom;
    int num;
    int mesNotes[5];
};

typedef struct etudiant etudiant;

struct tabEtudiants{
    etudiant* tabE;
    int taille;
};

typedef struct tabEtudiants tabEtudiants;

tabEtudiants* lireCSV(char* fichierNotes);
void afficherEtudiant(etudiant e);
void afficherTableauEtudiant(tabEtudiants tabEtudiants);
double calculerMoyenneParEtudiant(etudiant e);
etudiant meilleurEtudiant(tabEtudiants tabEtudiants);
void saisirEtudiant(etudiant* a);
void ajouterEtudiant(tabEtudiants* tabEtudiants,etudiant* a);
void ecrireCSV(tabEtudiants* tabEtudiants,char* fichierNotes);
void supprimerEtudiant(tabEtudiants* tabEtudiants, int num);

#endif