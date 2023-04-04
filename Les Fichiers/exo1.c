#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(){
    FILE* mesFringues = NULL;
    char ligne[N];
    FILE* fichier = NULL;
    mesFringues = fopen("mesFringues.json", "w");
    fichier = fopen("mesFringues.csv", "r");
    if (fichier != NULL){
        for(int i=0; i<5 ; i++){
            fgets(ligne,N,fichier);
            fputs(ligne,mesFringues);
        }
    }else{
        printf("Erreur ouverture fichier \n");
    }
    fclose(fichier);
    fclose(mesFringues);
}
