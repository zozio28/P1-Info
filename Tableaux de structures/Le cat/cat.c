#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrice[10][10];
  int saisie;

  /* demande de saisie pour la matrice carée 10x10 */
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      printf("veuillez saisir la coordonnee [%d,%d] \n",i,j);
      scanf("%d",&saisie);
      matrice[i][j]=saisie;
    }
  }

  /* affichage de la matrice */
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      printf("%d ",matrice[i][j]);
    }
    printf("\n");
  }


  return 0;
}
