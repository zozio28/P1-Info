#include <stdio.h> //printf,scanf
#include <stdlib.h>

#define MAX_TAILLE 1000
//macro âge
#define AGE(anneeNaissance) (2023-anneeNaissance)

//Structure joueur
struct joueur{
    char* nom;
    char* prenom;
    int anneeNaissance;
    int ptsATP;
};

//Renomme la structure joueur en Joueur
typedef struct joueur Joueur;

//Procédure qui permet de demander les données d'un joueur
void ClassementATP(){
    Joueur* tabJoueur;
    int nbJoueurs;

    //demande le nombre de joueur à créer
    printf("Combien de joueur voulez vous créer ? ");
    scanf("%d", &nbJoueurs);

    #ifdef DEBUG
        printf("nbJoueurs : %d \n", nbJoueurs);
    #endif

    //alloue de la mémoire pour le tableau tabJoueur de type structure
    tabJoueur = malloc(nbJoueurs*sizeof(Joueur));

    //Boucle qui permet de changer de case du tableau
    for(int i=0 ; i<nbJoueurs ; i++){
        printf("\n-----JOUEUR----- \n");
        printf("Nom : ");
        tabJoueur[i].nom = malloc(MAX_TAILLE*sizeof(char));
        scanf("%s", tabJoueur[i].nom);
        #ifdef DEBUG
            printf("Nom : %s \n", tabJoueur[i].nom);
        #endif
        printf("Prénom : ");
        tabJoueur[i].prenom = malloc(MAX_TAILLE*sizeof(char));
        scanf("%s",tabJoueur[i].prenom);
        #ifdef DEBUG
            printf("Prénom : %s \n", tabJoueur[i].prenom);
        #endif
        printf("Année de naissance : ");
        scanf("%d",&tabJoueur[i].anneeNaissance);
        #ifdef DEBUG
            printf("Année de naissance : %d \n", tabJoueur[i].anneeNaissance);
        #endif
        printf("Points ATP : ");
        scanf("%d",&tabJoueur[i].ptsATP);
        #ifdef DEBUG
            printf("Points ATP : %d \n", tabJoueur[i].ptsATP);
        #endif
            printf("Age du joueur : %d \n", AGE(tabJoueur[i].anneeNaissance));
    }
}

//Fonction principale
int main(){

    //Appel de la procédure créée
    ClassementATP();

    return 0;
}