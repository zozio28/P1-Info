#include <stdio.h> /*printf, scanf,...*/

int main(int argc, char** argv) /*PROGRAMME*/
{
    int verifDate(int j, int m,int a) /*Fonction verifDate*/
    {
        if (j > 31 || j <= 0) /*si le jour est supérieur à 31, inférieur à 0, ou nul*/
        {
           return 0; /*retourner Faux*/
        }
        else if (m == 2) /*si le mois est février*/
        {
            if (j > 29) /*si le jour de février est supérieur à 29*/
            {
                return 0; /*retourner Faux*/
            }
            else if (j == 29) /*sinon si c'est le 29*/
            {
                if (a%4==0 || (a%100!=0 && a%400==0)) /*si l'année est bissextile*/
                {
                    return 1; /*retourner Vrai*/
                }
                else
                {
                    return 0; /*sinon retourner Faux*/
                }
            }
            else 
            {
                return 1; /*sinon retourner Vrai*/
            }
        }
        else if (m > 12 || m < 0) /*sinon si le mois est supérieur à 12*/
        {
            return 0; /*retourner Faux*/
        }
        else
        {
            return 1; /*sinon retourner Vrai*/
        }
    }

    /*déclaration*/
    int j;
    int m;
    int a;
    int date;

    printf("Entrez le jour : "); /*demander "Entrez le jour : "*/
    scanf("%d", &j); /*lire jour*/
    printf("Entrez le mois : "); /*demander "Entrez le mois : "*/
    scanf("%d", &m); /*lire mois*/
    printf("Entrez l'année : "); /*demander "Entrez l'année : "*/
    scanf("%d", &a); /*lire année*/

    date = verifDate(j,m,a); /*vérifier la date rentrée grâce à notre fonction verifDate*/
    if (date==1){ /*si le résultat est 1*/
        if (m<10 && j<10){ /*si le mois et le jour sont inférieurs à 10*/
            printf("La date 0%d/0%d/%d que vous avez saisie est correcte \n", j,m,a); /*ajoute un 0 devant le jour et le mois"*/
        }
        else if (m<10) /*sinon si ce n'est que le mois qui est inférieur à 10*/
        {
            printf("La date %d/0%d/%d que vous avez saisie est correcte \n", j,m,a); /*ajoute un 0 seulement devant le mois"*/
        }
        else if (j<10) /*sinon si ce n'est que le jour qui est inférieur à 10*/
        {
            printf("La date 0%d/%d/%d que vous avez saisie est correcte \n", j,m,a); /*ajoute un 0 seulement devant le jour"*/
        }
        else
        {
            printf("La date %d/%d/%d que vous avez saisie est correcte \n", j,m,a); /*sinon écrit "La date j/m/a que vous avez saisie est correcte" sans rien ajouter*/
        }
    }
    else if (date==0) /*sinon si le résultat est 0*/
    { 
        if (m<10 && j<10) /*si le mois et le jour sont inférieurs à 10*/
        {
            printf("La date 0%d/0%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); /*ajoute un 0 devant le jour et le mois"*/
        }
        else if (m<10) /*sinon si ce n'est que le mois qui est inférieur à 10*/
        {
            printf("La date %d/0%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); /*ajoute un 0 seulement devant le mois"*/
        }
        else if (j<10){ /*sinon si ce n'est que le jour qui est inférieur à 10*/
            printf("La date 0%d/%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); /*ajoute un 0 seulement devant le jour"*/
        }
        else
        {
            printf("La date %d/%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); /*sinon écrit "La date j/m/a que vous avez saisie n'est pas correcte" sans rien ajouter*/
        }
    }

    return 0;
}


//VERSION AMELIOREE

// #include <stdio.h> //printf, scanf,...

// int verifDate(int j, int m,int a){ 
    
//     //Vérifie que la date existe
//     if (j > 31 || j <= 0) //si le jour est supérieur à 31, inférieur à 0, ou nul
//     {
//         return 0; //retourner Faux
//     }
//     else if (m == 2) //si le mois est février
//     {
//         if (j > 29) //si le jour de février est supérieur à 29
//         {
//             return 0; //retourner Faux
//         }
//         else if (j == 29) //sinon si c'est le 29
//         {
//             if (a%4==0 || (a%100!=0 && a%400==0)) //si l'année est bissextile
//             {
//                 return 1; //retourner Vrai
//             }
//             else
//             {
//                 return 0; //sinon retourner Faux
//             }
//         }
//         else 
//         {
//             return 1; //sinon retourner Vrai
//         }
//     }
//     else if (m > 12 || m < 0) //sinon si le mois est supérieur à 12
//     {
//         return 0; /*retourner Faux*/
//     }
//     else
//     {
//         return 1; //sinon retourner Vrai
//     }
// }

// int main(int argc, char** argv){   

//     //Variables
//     int j;
//     int m;
//     int a;
//     int existe;

//     //Demande à l'utilisateur de saisir une date
//     printf("Entrez le jour : "); //demander "Entrez le jour : "
//     scanf("%d", &j); //lire jour
//     printf("Entrez le mois : "); //demander "Entrez le mois : "
//     scanf("%d", &m); //lire mois
//     printf("Entrez l'année : "); //demander "Entrez l'année : "
//     scanf("%d", &a); //lire année

//     existe = verifDate(j,m,a); //vérifier la date rentrée grâce à notre fonction verifDate

//     switch (existe)
//     {
//     case 1: //si le résultat est 1
//         if (m<10 && j<10){ //si le mois et le jour sont inférieurs à 10
//             printf("La date 0%d/0%d/%d que vous avez saisie est correcte \n", j,m,a); //ajoute un 0 devant le jour et le mois"
//         }
//         else if (m<10) //sinon si ce n'est que le mois qui est inférieur à 10
//         {
//             printf("La date %d/0%d/%d que vous avez saisie est correcte \n", j,m,a); //ajoute un 0 seulement devant le mois"
//         }
//         else if (j<10) //sinon si ce n'est que le jour qui est inférieur à 10
//         {
//             printf("La date 0%d/%d/%d que vous avez saisie est correcte \n", j,m,a); //ajoute un 0 seulement devant le jour"
//         }
//         else
//         {
//             printf("La date %d/%d/%d que vous avez saisie est correcte \n", j,m,a); //sinon écrit "La date j/m/a que vous avez saisie est correcte" sans rien ajouter
//         }
//         break;
//     default: //sinon si le résultat est 0
//         if (m<10 && j<10) //si le mois et le jour sont inférieurs à 10
//         {
//             printf("La date 0%d/0%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); //ajoute un 0 devant le jour et le mois"
//         }
//         else if (m<10) //sinon si ce n'est que le mois qui est inférieur à 10
//         {
//             printf("La date %d/0%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); //ajoute un 0 seulement devant le mois"
//         }
//         else if (j<10){ //sinon si ce n'est que le jour qui est inférieur à 10
//             printf("La date 0%d/%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); //ajoute un 0 seulement devant le jour"
//         }
//         else
//         {
//             printf("La date %d/%d/%d que vous avez saisie n'est pas correcte \n", j,m,a); //sinon écrit "La date j/m/a que vous avez saisie n'est pas correcte" sans rien ajouter
//         }
//         break;
//     }

//     return 0;
// }