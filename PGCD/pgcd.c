#include <stdio.h>

int main(int argc, char** argv){

int pgcd(int a,int b){
  int m;

  while ((a%b)!=0){
    m=b;
    b=a%b;
    a=m;
  }

  return b;
}
  int a;
  int b;
  int p;

  printf("Entrez un premier nombre : ");
  scanf("%d", &a);
  printf("Entrez un second nombre : ");
  scanf("%d", &b);

  p=pgcd(a,b);
  printf("Le pgcd de %d et %d est %d \n", a, b, p);

  return 0;
}
