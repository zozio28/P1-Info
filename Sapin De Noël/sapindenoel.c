#include <stdio.h> /*printf*/
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	srand( time( NULL ) );
	/*déclaration*/
	int h;
	int j;
	int e;
	int t;
	int random = rand() % 101;

	printf("Entrez la hauteur du sapin : ");
	scanf("%d", &h);

	j=h;
	t=h-1;
	e=1;

	for (int i=0; i<h; i++)
	{
		printf(" ");
	}
	printf("\033[0;93m"); /*yellow*/
	printf("✯ \n");

	for (int i=0; i<h; i++)
	{
		for (int i=0; i<j; i++)
		{
			printf(" ");
		}
		for (int i=0; i<e; i++)
		{
			printf("\033[0;32m"); /*green*/
			printf("^");
		}
		j=j-1;
		e=e+2;
		printf("\n");
	}
	for (int i=0; i<t; i++)
	{
		printf(" ");
	}
	printf("\033[0;33m"); /*brown*/
	printf("| | \n");

	return 0;
}

//VERSION AMELIOREE

// #include <stdio.h> //printf
// #include <stdlib.h>
// #include <time.h>

// int demandeHauteur(){

// 	//Variables
// 	int h;

// 	//Demande la hauteur du sapin
// 	printf("Entrez la hauteur du sapin : ");
// 	scanf("%d", &h);
// 	return h;
// }

// void Etoile(int h){

// 	//Modélise l'étoile	
// 	for (int i=0; i<h; i++)
// 	{
// 		printf(" ");
// 	}
// 	printf("\033[0;93m"); //yellow
// 	printf("✯ \n");
// }

// void Sapin(int h){

// 	//Variables
// 	int j;
// 	int e;
// 	int t;

// 	j=h;
// 	t=h-1;
// 	e=1;

// 	//Modélise le sapin
// 	for (int i=0; i<h; i++)
// 	{
// 		for (int i=0; i<j; i++)
// 		{
// 			printf(" ");
// 		}
// 		for (int i=0; i<e; i++)
// 		{
// 			printf("\033[0;32m"); //green
// 			printf("^");
// 		}
// 		j=j-1;
// 		e=e+2;
// 		printf("\n");
// 	}
// 	for (int i=0; i<t; i++)
// 	{
// 		printf(" ");
// 	}
// 	printf("\033[0;33m"); //brown
// 	printf("| | \n");
// }

// int main(int argc, char** argv)
// {
// 	srand( time( NULL ) );

// 	//Variables
// 	int h;
// 	int hauteur;
// 	int random = rand() % 101;

// 	hauteur = demandeHauteur();

// 	//Constitue le sapin en entier
// 	Etoile(h);
// 	Sapin(h);

// 	return 0;
// }