#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fonction qui calcule le Delta
double calculerDelta (double a, double b, double c){
  return pow(b,2)-4*a*c;
}

//Fonction qui affiche les solutions
void solutions(int* nbsolution, double* s1, double* s2, double a, double b, double c){

  if (nbsolution==0){
    printf("Il y a 1 solution : %lf \n", *s1);
  }else if (nbsolution>0){
    printf("Il y a 2 solutions : %lf et %lf \n", *s1, *s2);
  }else{
    printf("Il n'y a pas de solution \n");
  }
}

//Fonction principale
int main(){

  //Variables
  double a;
  double b;
  double c;
  double S1;
  double S2;
  int nb;
  double* s1 = &S1;
  double* s2 = &S2;
  int* nbs=&nb;

  printf("Veuillez saisir a : \n");
  scanf("%lf", &a);
  printf("Veuillez saisir b : \n");
  scanf("%lf", &b);
  printf("Veuillez saisir c : \n");
  scanf("%lf", &c);
  printf("Vous avez saisi a=> %.1lf b=> %.1lf c=> %.3lf \n\n", a, b, c);
  printf("Le delta est : %.1lf \n\n", calculerDelta(a, b, c));

  if (calculerDelta(a,b,c)>=0){
    nb=2;
    S1=((-b+sqrt(calculerDelta(a,b,c)))/(2*a));
    S2=((-b-sqrt(calculerDelta(a,b,c)))/(2*a));
  }else if (calculerDelta(a,b,c)==0){
    *nbs=1;
    S1=((-b)/(2*a));
  }else{
    *nbs=0;
  }

  solutions(nbs,s1,s2,a,b,c);

  return 0;
}
