#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifierStock(char** aliments, char* aliment, int* stock, int taille_stock);
void ravitaillerAliment(char** aliments, char* aliment, int* stock, int taille_stock);

int main(){
    printf("Bienvenue dans le programme de gestion des stocks de notre restaurant de burgers !\n\n");

    // Initialisation des stocks
    int taille_stock = 6;
    char** aliments = malloc(taille_stock * sizeof(char*));
    aliments[0] = "Tranche d'emmental";
    aliments[1] = "Steak";
    aliments[2] = "Steak vegan";
    aliments[3] = "Tranche de tomate";
    aliments[4] = "Feuille de salade";
    aliments[5] = "Cornichon";
    int* stock = malloc(taille_stock * sizeof(int));
    int i;
    for(i = 0; i < taille_stock; i++){
        printf("Veuillez saisir la quantité en stock pour %s : ", aliments[i]);
        scanf("%d", &stock[i]);
    }

    // Utilisation des fonctionnalités
    char aliment_recherche[20];
    int quantite_restante;
    int choix;
    printf("\n\n");
    printf("Que voulez vous faire : \n1| Vérifier le stock d'un aliment \n2| Ravitailler un aliment \n>");
    scanf("%d", &choix);
    switch(choix){
        case 1:
            printf("Veuillez saisir le nom de l'aliment que vous souhaitez vérifier : ");
            scanf("%s", aliment_recherche);
            quantite_restante = verifierStock(aliments,aliment_recherche, stock, taille_stock);
            if(quantite_restante == -1){
                printf("L'aliment que vous avez saisi n'est pas en stock.\n");
            }
            else{
                printf("Il reste %d %s en stock.\n", quantite_restante, aliment_recherche);
            }
            printf("\n\n");
            break;
        case 2:
            printf("Veuillez saisir le nom de l'aliment que vous souhaitez ravitailler : ");
            scanf("%s", aliment_recherche);
            ravitaillerAliment(aliments,aliment_recherche, stock, taille_stock);
            printf("Le ravitaillement de %s a été effectué.\n", aliment_recherche);
            break;
    }

    // Libération de la mémoire allouée
    free(aliments);
    free(stock);

    return 0;
}

int verifierStock(char** aliments, char* aliment, int* stock, int taille_stock){
    int i;
    for(i = 0; i < taille_stock; i++){
        if(strcmp(aliment, aliments[i]) == 0){
            return stock[i];
        }
    }
    return -1;
}

void ravitaillerAliment(char** aliments, char* aliment, int* stock, int taille_stock){
    int i;
    for(i = 0; i < taille_stock; i++){
        if(strcmp(aliment, aliments[i]) == 0){
            printf("Veuillez saisir la quantité à rajouter pour %s : ", aliment);
            int quantite;
            scanf("%d", &quantite);
            stock[i] += quantite;
            break;
        }
    }
}
