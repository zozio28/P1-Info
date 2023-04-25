#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int main() {
    FILE* mesFringues = NULL;
    FILE* fichier = NULL;
    char ligne[N];
    char* laLigne;
    int colLues;
    int liLues;

    laLigne = malloc(N * sizeof(char));

    mesFringues = fopen("mesFringues.json", "w");
    fichier = fopen("mesFringues.csv", "r");
    if (fichier != NULL) {
        fprintf(mesFringues, "[");
        liLues = 0;
        while (fgets(ligne, N, fichier) != NULL) {
            colLues = 0;
            fprintf(mesFringues, "\n  {");
            laLigne = strtok(ligne, ";");
            while (laLigne != NULL) {
                switch (colLues) {
                    case 0:
                        fprintf(mesFringues, "\n    \"id\": \"%s\",", laLigne);
                        break;
                    case 1:
                        fprintf(mesFringues, "\n    \"nom\": \"%s\",", laLigne);
                        break;
                    case 2:
                        fprintf(mesFringues, "\n    \"taille\": \"%s\",", laLigne);
                        break;
                    case 3:
                        fprintf(mesFringues, "\n    \"prix\": \"%s\",", laLigne);
                        break;
                    default:
                        break;
                }
                laLigne = strtok(NULL, ";");
                colLues++;
            }
            fprintf(mesFringues, "\n  }");
            liLues++;
            if (liLues > 1) {
                fprintf(mesFringues, ",");
            }
        }
        fprintf(mesFringues, "\n]");
    } else {
        printf("Erreur ouverture fichier \n");
    }

    free(laLigne);
    laLigne = NULL;

    fclose(fichier);
    fclose(mesFringues);

    return 0;
}
