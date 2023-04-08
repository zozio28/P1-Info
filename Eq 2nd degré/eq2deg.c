#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fonction qui calcule le Delta
double calculerDelta (double a, double b, double c){
  return pow(b,2)-4*a*c;
}

//Fonction qui calcule les solutions
void solutions(int* nbsolution, double* s1, double* s2, double a, double b, double c){

  if (calculerDelta(a,b,c)>0){
    *nbsolution = 2;
    *s1=((-b+sqrt(calculerDelta(a,b,c)))/(2*a));
    *s2=((-b-sqrt(calculerDelta(a,b,c)))/(2*a));
  }else if (calculerDelta(a,b,c)==0){
    *nbsolution = 1;
    *s1=((-b)/(2*a));
  }else{
    *nbsolution = 0;
  }
}

//Fonction principale
int main(){

  //Variables
  double a;
  double b;
  double c;
  double* s1 = NULL;
  double* s2 = NULL;
  int* nbs = NULL;

  //allocation de mémoire
  s1 = malloc(sizeof(double));
  s2 = malloc(sizeof(double)); 
  nbs = malloc(sizeof(int)); 

  //affiche les nombres saisis par l'utilisateur
  printf("Veuillez saisir a : \n");
  scanf("%lf", &a);
  printf("Veuillez saisir b : \n");
  scanf("%lf", &b);
  printf("Veuillez saisir c : \n");
  scanf("%lf", &c);
  printf("Vous avez saisi a=> %.1lf b=> %.1lf c=> %.3lf \n\n", a, b, c);
  printf("Le delta est : %.2lf \n\n", calculerDelta(a, b, c));

  solutions(nbs,s1,s2,a,b,c);

  //affiche les solutions
  if (*nbs == 2){
    printf("Il y a 2 solutions : %lf et %lf \n", *s1, *s2);
  }else if (*nbs == 1){
    printf("Il y a 1 solutions : %lf \n", *s1);
  }else{
    printf("Il n'y a pas de solution \n");
  }

  //libère l'espace alloué
  free(s1);
  free(s2);
  free(nbs);
  s1 = NULL;
  s2 = NULL;
  nbs = NULL;

  return 0;
}
