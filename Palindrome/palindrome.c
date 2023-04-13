#include <stdio.h> //printf,scanf
#include <stdlib.h>
#include <string.h>

#define MAX 100

/* Auteur : Zoé */
/* Date :  02/03/23 */
/* Résumé :  Vérifie si un mot ou une phrase est un palindrome */
/* Entrée(s) :  le mot ou la phrase donnée, la première lettre du mot, la dernière lettre du mot */
/* Sortie(s) :  Retourne 1 si vrai, retounr 0 si faux */
int estPalindromeMot(char monMot[MAX],int deb,int fin){
 if (fin<deb){
   return 1;
 }else if (monMot[deb]!=monMot[fin]){
   return 0;
 }else{
   return estPalindromeMot(monMot,deb+1,fin-1);
 }
}

/* Auteur : Zoé */
/* Date :  02/03/23 */
/* Résumé :  Fonction qui vérifie si une phrase est paslindrome */
/* Entrée(s) :  la pharse donnée, le premier caractère, le dernier caractère */
/* Sortie(s) :  Retourne 1 si vrai, retourne 0 si faux */
int estPalindromePhrase(char maPhrase[MAX],int deb,int fin){
  if (maPhrase[deb]==' '){
    deb+=1;
  }else if (maPhrase[fin]==' '){
    fin-=1;
  }

  if (fin<deb){
    return 1;
  }else if (maPhrase[deb]!=maPhrase[fin]){
    return 0;
  }else{
    return estPalindromeMot(maPhrase,deb+1,fin-1);
  }
}

/* Auteur : Zoé */
/* Date :  02/03/23 */
/* Résumé : Procédure qui vide le buffer après une saisie */
/* Entrée(s) : None */
/* Sortie(s) : None */
void emptyBuffer(){
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));
}

int main(){
  //Variables
  char mot[MAX];
  char phrase[MAX];
  int taille;
  
  //Permet de connaître la taille d'une chaîne de caractère
  printf("Entrez la phrase : \n");
  fgets(phrase,sizeof(char)*100,stdin);
  taille=strlen(phrase)-1;
  printf("La taille de maPhrase est %d \n\n",taille);

  //Permet de savoir si le mot est un palindrome
  printf("Entrez le mot : \n");
  scanf("%s", mot);
  if (estPalindromeMot(mot, 0, strlen(mot)-1)){
    printf("Le mot %s est un palindrome \n", mot);
  }else{
    printf("Le mot %s n'est pas un palindrome \n", mot);
  }

  //Permet de savoir si la phrase est un palindrome
  printf("\nEntrez la phrase (sans espaces) : \n");
  fscanf(stdin, "%s", phrase);
  if (estPalindromePhrase(phrase, 0, strlen(phrase)-1)){
    printf("La phrase %s est un palindrome \n", phrase);
  }else{
    printf("La phrase %s n'est pas un palindrome \n", phrase);
  }

  return 0;
}
