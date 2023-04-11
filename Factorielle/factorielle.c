#include <stdio.h> //printf, scanf 
#include <stdlib.h>

//Fonction récursive non terminale qui calcule la factorielle d'un nombre
int factorial(int n){
  if (n==0){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}

//Fonction récursive terminale qui calcule la factorielle d'un nombre
int tfactorial(int n, int acc){
  if (n==0){
    return acc;
  }else{
    return tfactorial(n-1,acc*n);
  }
}

//Fonction principale
int main(){

  //appel et affichage des fonctions récursives terminales et non terminales
  printf("%d \n", factorial(10));
  printf("%d \n", tfactorial(10,1));

  return 0;
}
