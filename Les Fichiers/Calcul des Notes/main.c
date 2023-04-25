#include "ecole.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    char* fichierNotes = NULL;
    fichierNotes = malloc(sizeof(char));

    lireCSV(fichierNotes);
    printf("%s",fichierNotes);

    free(fichierNotes);
    fichierNotes = NULL;

    return 0;
}