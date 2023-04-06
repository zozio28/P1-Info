#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int main(){
    FILE* mesFringues = NULL;
    FILE* fichier = NULL;
    char ligne[N];
    char* laLigne;
    char* id;
    char* nom;
    char* taille;
    char* prix;
    int colLues = 0;
    int liLues = 0;

    id = malloc(N*sizeof(char));
    nom = malloc(N*sizeof(char));
    taille = malloc(N*sizeof(char));
    prix = malloc(N*sizeof(char));
    laLigne = malloc(N*sizeof(char));

    mesFringues = fopen("mesFringues.json", "w");
    fichier = fopen("mesFringues.csv", "r");
    if (fichier != NULL){
        fprintf(mesFringues, "[");
        while(fgets(ligne,N,fichier)!=NULL){
            fgets(ligne,0,fichier);
            laLigne = strtok(ligne,";");
            fprintf(mesFringues, "\n \");
        }
        while (laLigne!=NULL){
            fgets(ligne,0,fichier);
            switch(colLues){
                case 0:
                    fprintf(mesFringues, "  \"id\": \"%s\",\n",laLigne);
                    break;
                case 1:
                    fprintf(mesFringues, "  \"nom\": \"%s\",\n",laLigne);
                    break;
                case 2:
                    fprintf(mesFringues, "  \"taille\": \"%s\",\n",laLigne);
                    break;
                case 3:
                    fprintf(mesFringues, "  \"prix\": \"%s\",\n",laLigne);
                    break;
                default:
                    break;
            }
            laLigne = strtok(NULL, ";");
            colLues++;
        }
        switch(liLues){
            case 4:
                fprintf(mesFringues, "  }");
                break;
            default:
                fprintf(mesFringues, "  }");
                break;
        }
        liLues++;

    }else{
        printf("Erreur ouverture fichier \n");
    }

    fclose(fichier);
    fclose(mesFringues);
}