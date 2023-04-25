#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TAILLE 1000

struct artiste{
    char* nom;
    char* prenom;
    int nbDisques;
    int anneeN;
};

typedef struct artiste Artiste;

void ajouterArtiste(Artiste a){
    FILE* fichier = NULL;
    fichier = fopen("mesArtistes.csv","a");
    if(fichier != NULL){
        fprintf(fichier,a.nom,a.prenom,a.nbDisques,a.anneeN);
        fprintf(fichier, "\n");
        fclose(fichier);
    }
}

void GestionArtiste(int argc,char* argv[]){
    Artiste a;
    if(argc != 5){
        printf("Il n'y a pas le bon  nombres d'arguments \n");
    }else{
        a.nom = malloc(MAX_TAILLE*sizeof(char));
        a.nom = argv[1];
        a.prenom = malloc(MAX_TAILLE*sizeof(char));
        a.prenom = argv[2];
        a.nbDisques = atoi(argv[3]);
        a.anneeN = atoi(argv[4]);
        ajouterArtiste(a);
    }
}

int main(int argc,char* argv[]){

    GestionArtiste(argc,argv);

    return 0;
}