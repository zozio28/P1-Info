#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

/* Auteur : Zoé */
/* Date :  02/03/23 */
/* Résumé :  Procédure qui supprime le même caractère dans toute a phrase */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
void supprCar(char maPhraseInitiale[MAX],char car,int i,int j, char maPhraseModifiee[MAX]){
  // Cas de base : on a parcouru toute la chaîne de caractères
  if (maPhraseInitiale[i] == '\0') {
      maPhraseModifiee[j] = '\0'; // On termine la chaîne modifiée
      return;
  }
  
  // Si le caractère actuel est différent du caractère à supprimer, on le conserve dans la chaîne modifiée
  if (maPhraseInitiale[i] != car) {
      maPhraseModifiee[j] = maPhraseInitiale[i];
      supprCar(maPhraseInitiale, car, i+1, j+1, maPhraseModifiee); // On passe au caractère suivant
  }
  // Si le caractère actuel est le caractère à supprimer, on ne le conserve pas et on passe directement au caractère suivant
  else {
      supprCar(maPhraseInitiale, car, i+1, j, maPhraseModifiee);
  }
}

int main(){
    //Variables
    char maPhraseInitiale[MAX];
    char car;
    char maPhraseModifiee[MAX];
    
    printf("Entrez une phrase : ");
    fgets(maPhraseInitiale, MAX, stdin); // Lecture de la chaîne de caractères
    
    printf("Entrez le caractere a supprimer : ");
    scanf("%c", &car); // Lecture du caractère à supprimer
    
    // Suppression du caractère dans la chaîne de caractères
    supprCar(maPhraseInitiale, car, 0, 0, maPhraseModifiee);
    
    printf("\nLa phrase initiale est : %s\n", maPhraseInitiale);
    printf("La phrase modifiee est : %s\n", maPhraseModifiee);
    
    return 0;
}
