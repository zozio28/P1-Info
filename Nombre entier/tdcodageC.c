#include <stdio.h> /* printf, scanf */
#include <stdlib.h> /* exit */

int main(){
	
	/* déclaration */
	int nb;
	int retour;
	
	/* écrire("veuillez saisir un nombre") */
	 printf("Veuillez saisir un nombre : ");
	 /* lire(nb) */
	 retour=scanf("%d", &nb);
	 if (!retour){ /* <=> retour==0 */
		 printf("Il y a une erreur de saisie \n");
		 exit(EXIT_FAILURE); /* sortir du programme avec le code erreur de fail */
	 }
	 /* écrire("vous avez saisie" +nb) */
	 printf("Vous avez saisie : %d \n", nb);
	return 0;
}
	
