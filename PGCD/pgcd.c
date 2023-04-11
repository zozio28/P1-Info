#include <stdio.h> //printf, scanf

//Fonction qui calcule le PGCD de 2 nombres
int pgcd(int a,int b){

  //Variable
  int m;

  while ((a%b)!=0){
    m=b;
    b=a%b;
    a=m;
  }
  
  return b;
}

//Fonction principale
int main(int argc, char** argv){

  //Variables
  int a;
  int b;

  //Saisie des 2 nombres par l'utilisateur
  printf("Entrez un premier nombre : ");
  scanf("%d", &a);
  printf("Entrez un second nombre : ");
  scanf("%d", &b);

  //Affichage du PGCD des 2 nombres
  printf("Le pgcd de %d et %d est %d \n", a, b, pgcd(a,b));

  return 0;
}
