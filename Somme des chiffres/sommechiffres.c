#include <stdio.h>
#include <stdlib.h>

/* Auteur : Zoé */
/* Date :  02/03/23 */
/* Résumé :  Fonction qui calcule la somme des chiffres d'un nombre */
/* Entrée(s) :  le nombre n, un accumalateur */
/* Sortie(s) :  la somme des chiffres du nombre */
int sommeTer(int n ,int acc){
  if (n == 0){
    return acc;
  }else{
    return sommeTer(n/10, acc + n%10);
  }
}

int main(){
  //Variables
  int nombre;

  printf("Veuillez entrer un nombre n : \n");
  scanf("%d", &nombre);
  printf("La somme des chiffres du nombre choisi est : %d \n", sommeTer(nombre,0));

  return 0;
}
