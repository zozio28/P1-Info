#include <stdio.h>
#include <stdlib.h>

char** allouer(int taille1, int taille2){
    char** chaine;
    chaine = malloc(taille1*sizeof(char*));
    for (int i = 0; i<taille1; i++){
        chaine[i]=malloc(taille2*sizeof(char));
    }
    return chaine;
}

void init(char** chaine, int taille1, int taille2){
    for (int i=0; i<taille1; i+=2){
        for (int j=0; j<taille2; j++){
            chaine[i][j]='i';
        }
    }
    for (int i=1; i<taille1; i+=2){
        for (int j=0; j<taille2; j++){
            chaine[i][j]='p';
        }
    }
}

void affichage(char** chaine, int taille1, int taille2){
    for (int i=0; i<taille1; i++){
        for (int j=0; j<taille2; j++){
            printf("| %c ", chaine[i][j]);
        }
        printf("| \n");
    }
}

int main(){

    char** pchaine=NULL;

    pchaine=allouer(6,5);
    init(pchaine,6,5);
    affichage(pchaine,6,5);

    free(pchaine);
    pchaine=NULL;

    return 0;
}
