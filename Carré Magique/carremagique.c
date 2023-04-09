#include <stdio.h>
#include <stdlib.h>

//Fonction qui permet d'allouer un tableau dynamique
int** allouerTableau(int nb_lignes,int nb_colonnes){
  int** ptab=NULL;
  ptab=malloc(nb_colonnes*sizeof(int*));
  for (int i=0; i<nb_colonnes; i++){
    ptab[i]=malloc(nb_lignes*sizeof(int));
  }
  return ptab;
}

//Procédure qui permet d'initialiser un tableau dynamique
void initTableau(int** tableau,int nb_lignes,int nb_colonnes){
  for (int i=0; i<nb_lignes; i++){
    for (int j=0; j<nb_colonnes; j++){
        tableau[i][j]='0';
    }
  }
}

//Procédure qui permet d'afficher un tableau dynamique
void afficherTableau(int** tableau, int nb_lignes, int nb_colonnes){
  for (int i=0; i<nb_colonnes; i++){
    for (int j=0; j<nb_lignes; j++){
      printf("| %d ", tableau[i][j]);
    }
    printf("| \n");
  }
}

//Fonction qui fait la somme d'une ligne donnée
int cptLigne(int** carre,int ligne,int nb_colonnes){
  int nb_l=0;
  for (int j=0; j<nb_colonnes; j++){
    nb_l += carre[ligne][j];
  }
  return nb_l;
}

//Fonction qui fait la somme d'une colonne donnée
int cptColonne(int** carre,int colonne,int nb_lignes){
  int nb_c=0;
  for (int j=0; j<nb_lignes; j++){
    nb_c += carre[j][colonne];
  }
  return nb_c;
}

//Fonction qui fait la somme de la diagonale (droite-gauche)
int cptDiag1(int** carre,int nb_lignes,int nb_colonnes){
  int nb_d1=0;
  for (int i=0; i<nb_colonnes; i++){
    nb_d1 += carre[i][nb_colonnes-1-i];
  }
  return nb_d1;
}

//Fonction qui fait la somme de la diagonale (gauche-droite)
int cptDiag2(int** carre,int nb_lignes,int nb_colonnes){
  int nb_d2=0;
  for (int i=0; i<nb_colonnes; i++){
    nb_d2 += carre [i][i];
  }
  return nb_d2;
}

//Prédicat qui permet de savoir si un carré est magique
int estMagique(int** carre,int nb_lignes,int nb_colonnes){
  int sommemagique = nb_lignes*(nb_lignes*nb_colonnes +1)/2;

  if(cptDiag1(carre,nb_lignes,nb_colonnes)!=sommemagique || cptDiag2(carre,nb_lignes,nb_colonnes)!=sommemagique){
    return 0;
  }
  for (int i=0;i<nb_lignes;i++){
    if (cptLigne(carre,i,nb_colonnes)!=sommemagique || cptColonne(carre,i,nb_lignes)!=sommemagique){
      return 0;
    }
  }
  return 1;
}

//Fonction principale
int main(){

  //Variables
  int** tab;
  int lignes=3;
  int colonnes=3;

  //allocation de mémoire
  tab=allouerTableau(lignes,colonnes);

  //initialisation du tableau dynamique
  initTableau(tab,lignes,colonnes);

  //demande à l'utilisateur la saisie des valeurs du carré magique
  for (int i=0; i<lignes; i++){
    for (int j=0; j<colonnes; j++){
      printf("l=%d et c=%d saisir la valeur : \n", i,j);
      scanf("%d", &tab[i][j]);
    }
  }
  printf("\n");

  //affichage du carré magique
  afficherTableau(tab,lignes,colonnes);

  //affiche la somme des colonnes,lignes,diagonales
  printf("\n");
  for(int i=0 ; i<lignes ; i++){
    printf("somme ligne n°%d = %d \n", i, cptLigne(tab,i,colonnes));
    printf("somme colonne n°%d = %d \n", i, cptColonne(tab,i,lignes));
  }
  printf("somme diagonale n°1 = %d \n", cptDiag1(tab,lignes,colonnes));
  printf("somme diagonale n°2 = %d \n", cptDiag2(tab,lignes,colonnes));

  //affiche si le carré est magique
  if (estMagique(tab,lignes,colonnes)){
    printf("\nLe carré est magique \n");
  }else{
    printf("\nLe carré n'est pas magique \n");
  }

  //libère l'espace alloué
  free(tab);
  tab=NULL;

  return 0;
}
