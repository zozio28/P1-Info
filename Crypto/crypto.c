#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int demanderchoix(){

  //Variables
  int choix;

  //Demande si l'utilisateur souhaite crypter ou décrypter un message
  printf("Souhaitez-vous 1| Crypter   2| Décrypter un message ? \n");
  scanf("%d", &choix);
  return choix;
}

void AffGrille(char phrase[100], char clé[100]){

  //Variables
  int n;

  //Affichage de la grille
  n=0;
  for (int i = 0; i < strlen(clé); i++){
    for (int j = 0; j < strlen(clé); j++){
      printf(" %c |", phrase[n]);
      n+=1;
    }
    printf("\n");
  }
  printf("\n");
}

void codage(char phrase[100], char clé[100]){

  //Variables
  int m;
  int n;

    //Code le message
    n=0;
    m=0;
    for (int i=0; i < strlen(clé); i++){
      n=m;
      for (int j=0; j < strlen(clé); j++){
        printf("%c",phrase[n]);
        n+=strlen(clé);
      }
      m+=1;
    }
    printf("\n");
}

void decodage(char phrase[100], char clé[100]){

  //Variables
  int m;
  int n;

    //Code le message
    n=0;
    m=0;
    for (int i=0; i < strlen(clé); i++){
      n=m;
      for (int j=0; j < strlen(clé); j++){
        printf("%c",phrase[n]);
        n+=strlen(clé);
      }
      m+=1;
    }
    printf("\n");
}

int main(int argc, char** argv){

  //Variables
  int choix;
  char phrase[100];
  char clé[100];

  choix=demanderchoix();

  //Demande le message à coder
    printf("Entrez votre message (ajoutez '-' pour les espaces) : \n");
    scanf("%s", phrase);
    printf("Entrez votre clé : ");
    scanf("%s", clé);

  switch (choix) {
    case 1:
      AffGrille(phrase,clé);
      codage(phrase,clé);
      break;
    case 2:
      AffGrille(phrase,clé);
      decodage(phrase,clé);
      break;
    default:
      printf("ERREUR, le numéro choisi ne peut être identifié \n");
      break;
    }

  return 0;
}
