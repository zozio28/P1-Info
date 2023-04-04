#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  joueur p;
  joueur* pomme = &p;
  creationJoueur(pomme);
  afficherJoueur(p);

  free(pomme);
  pomme = NULL;

  return 0;
}
