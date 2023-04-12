#include <stdio.h> //printf, scanf
#include <stdlib.h>
#include <string.h>

//Fonction qui demande à l'utilisateur s'il souhaite crypter ou décrypter le message
int demanderchoix(){

  //Variables
  int choix;

  printf("Souhaitez-vous 1| Crypter   2| Décrypter un message ? \n");
  scanf("%d", &choix);
  return choix;
}

//Procédure qui affiche la grille
void AffGrille(char phrase[100], char clé[100]){

  //Variables
  int n;

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

//Procédure qui code le message
void codage(char phrase[100], char clé[100]){

  //Variables
  int m;
  int n;

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

//Procédure qui décode le message
void decodage(char phrase[100], char clé[100]){

  //Variables
  int m;
  int n;

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

//Fonction principale
int main(int argc, char** argv){

  //Variables
  int choix;
  char phrase[100];
  char clé[100];

  //Fait appel à la fonction qui demande le choix de l'utilisateur
  choix=demanderchoix();

  //Demande le message à coder
  printf("Entrez votre message (ajoutez '-' pour les espaces) : \n");
  scanf("%s", phrase);
  printf("Entrez votre clé : ");
  scanf("%s", clé);

  //Fait appel à une des procédures en fonction du choix de l'utilisateur
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
