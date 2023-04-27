#ifndef __ecole_H_
#define __ecole_H_

struct etudiant{
    char* nom;
    char* prenom;
    int num;
    int mesNotes[5];
};

struct tabetudiants{
    int* tabE;
    int taille;
};

typedef struct etudiant Etudiant;
typedef struct tabetudiant tabEtudiants;

tabEtudiants* lireCSV(char* fichierNotes);
void afficherEtudiant(Etudiant e);
void afficherTableauEtudiant(tabEtudiants tabEtudiants);
double calculerMoyenneParEtudiant(Etudiant e);
Etudiant meilleurEtudiant(tabEtudiants tabEtudiants);
void saisirEtudiant(Etudiant* a);
void ajouterEtudiant(tabEtudiants* tabEtudiants,Etudiant* a);
void ecrireCSV(tabEtudiants* tabEtudiants,char* fichierNotes);
void supprimerEtudiant(tabEtudiants* tabEtudiants, int num);

#endif