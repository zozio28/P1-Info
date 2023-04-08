#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100

struct aliments{
    // char[TAILLE] Tranche d'emmental;
}aliments;

typedef struct aliments Aliments;

void vérifierStock(Aliments Amaya){

}

int ravitaillerAliment(){
    char newaliment;

    printf("Entrez l'aliment à ajouter");
    scanf("%c", newaliment);
}

int main(){
    char Stock;

    printf("Veuillez entrer les aliments en Stock");
    scanf("%s", Stock);

    return 0;
}