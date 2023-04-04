#include <stdio.h>
#include <stdlib.h>

int** allouerTableau(int nb_lignes,int nb_colonnes){
  int** ptab=NULL;
  ptab=malloc(nb_colonnes*sizeof(int*));
  for (int i=0; i<nb_colonnes; i++){
    ptab[i]=malloc(nb_lignes*sizeof(int));
  }
  return ptab;
}

void initTableau(int** tableau,int nb_lignes,int nb_colonnes){
  for (int i=0; i<nb_lignes; i++){
    for (int j=0; j<nb_colonnes; j++){
        tableau[i][j]='0';
    }
  }
}

void afficherTableau(int** tableau, int nb_lignes, int nb_colonnes){
  for (int i=0; i<nb_colonnes; i++){
    for (int j=0; j<nb_lignes; j++){
      printf("| %d | ", tableau[i][j]);
    }
    printf(" \n");
  }
}

void hfi

int cptLigne(int** carre,int ligne,int nb_colonnes){
  int nb_l;
  for (int j=0; j<nb_colonnes; j++){
    nb_l += carre[ligne][j];
  }
  printf("somme ligne = %d \n", nb_l);
  return nb_l;
}

int cptColonne(int** carre,int colonne,int nb_lignes){
  int nb_c=0;
  for (int j=0; j<nb_lignes; j++){
    nb_c += carre[j][colonne];
  }
  printf("somme colonne = %d \n", nb_c);
  return nb_c;
}

int cptDiag1(int** carre,int nb_lignes,int nb_colonnes){
  int nb_d1=0;
  for (int i=0; i<nb_colonnes; i++){
    nb_d1 += carre[i][nb_colonnes-1-i];
  }
  printf("somme diagonale 1 = %d \n", nb_d1);
  return nb_d1;
}

int cptDiag2(int** carre,int nb_lignes,int nb_colonnes){
  int nb_d2=0;
  for (int i=0; i<nb_colonnes; i++){
    nb_d2 += carre [i][i];
  }
  printf("sommediagonale 2 = %d \n", nb_d2);
  return nb_d2;
}

int estMagique(int** carre,int nb_lignes,int nb_colonnes){
  int ref = cptDiag1(carre,nb_lignes,nb_colonnes);
  int res = cptDiag2(carre,nb_lignes,nb_colonnes);
  int i;
  int n=3;

  if (ref = res){
    i = 0;
  }else{
    i=n+1;
  }
  while ((i<n) && (cptLigne(carre,nb_lignes,nb_colonnes)=ref)){
    i=i+1;
  }

}

int main(){
  int** tab;
  int lignes=3;
  int colonnes=3;

  tab=allouerTableau(lignes,colonnes);
  initTableau(tab,lignes,colonnes);

  for (int i=0; i<lignes; i++){
    for (int j=0; j<colonnes; j++){
      printf("l=%d et c=%d saisir la valeur : \n", i,j);
      scanf("%d", &tab[i][j]);
    }
  }

  afficherTableau(tab,lignes,colonnes);

  cptLigne(tab,lignes,colonnes);
  cptColonne(tab,colonnes,lignes);
  cptDiag1(tab,lignes,colonnes);
  cptDiag2(tab,lignes,colonnes);

  free(tab);
  tab=NULL;

  return 0;
}
