#include <stdio.h>
#include <stdlib.h>

/* Auteur : ????? */
/* Date :  ????? */
/* Résumé : ????? */
/* Entrée(s) : ?????  */
/* Sortie(s) : ?????  */
int F1(int nb);

/* Auteur :  ????? */
/* Date :  ????? */
/* Résumé : ????? */
/* Entrée(s) : ?????  */
/* Sortie(s) : ?????  */
int F2(int nb, int acc);

int main(int argc, char* argv[]){
  printf("%d \n",F1(1));
  printf("%d \n",F2(1,0));
  printf("%d \n",F1(3));
  printf("%d \n",F2(3,0));
  printf("%d \n",F1(5));
  printf("%d \n",F2(5,0));
  printf("%d \n",F1(17));
  printf("%d \n",F2(17,0));
  return 0;
}

int F1(int nb){
  int  res=0;
  int  tmp=0;

  while(nb!=0){
    tmp = nb % 2;
    res = res * 10 + tmp;
    nb = nb / 2;
  }
  return res;
}

int F2(int nb,  int acc){
  if (nb == 0) {
    return acc;
  } else {
    return F2(nb/2,  acc*10 +(nb%2));
  }
}