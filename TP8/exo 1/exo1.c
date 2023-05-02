#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char maChaine1[10];
  char maChaine2[10];

  printf("Entrer une chaîne de caractère : \n");
  scanf("%s",maChaine1);

  printf("L'utilisateur a rentré la chaine suivante : %s \n",maChaine1);

  strcpy(maChaine2,maChaine1);
  printf("La copie donne : %s \n",maChaine2);

  return 0;
}
