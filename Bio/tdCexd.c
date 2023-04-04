#include <stdio.h> /* printf, scanf */

int main(int argc, char** argv){

	/*déclaration*/
	char nom[50];
	char prenom[50];
	int age;

	/* écrire("Entrez votre nom :")*/
	printf("Entrez votre nom : ");
	/* lire(nom) */
	scanf("%s", nom);
	/* écrire("Entrez votre prénom :")*/
	printf("Entrez votre prénom : ");
	/* lire(prenom) */
	scanf("%s", prenom);

	/* redemande la saisie de l'âge tant qu'elle n'est pas correcte (age doit être un entier positif inférieur à 2⁷)*/
	while((!age) || (age<=0) || (age>=128)){
    	/* écrire("Entrez votre âge :")*/
	    printf("Entrez votre âge : "); 
	    /* lire(age) */
    	scanf("%d", &age);
    }

	/* écrire("Voici ce que vous avez entré :")*/
	printf("Voici ce que vous avez entré : \n");
	/* écrire("Nom :" +nom)*/
	printf("Nom : %s \n", nom);
	/* écrire("Prénom" : +prenom)*/
	printf("Prénom : %s \n", prenom);
	if (age==1){
		/* écrire("Âge :" +age "an")*/
		printf("Âge : %d an \n", age);
	}else{
		/* écrire("Âge :" +age "ans")*/
		printf("Âge : %d ans \n", age);
	} /* met "an" au singulier si age=1, sinon le met au pluriel */
	
	return 0;
}
