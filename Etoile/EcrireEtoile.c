#include <stdio.h> //printf, scanf

//Procédure récursive qui affiche un triangle d'étoile en fonction du nombre en entrée
void ecrireetoile(int n){
    if(n == 0){
        return;
    }else{
        ecrireetoile(n-1);
        for(int i=0 ; i<n ; i++){
            printf("*");
        }
    }
    printf("\n");
}

//Fonction principale
int main(){

    //Variable
    int n;

    //demande à l'utilisateur de saisir le nombre d'étoile
    printf("Veuillez saisir le nombre d'étoile : ");
    scanf("%d",&n);

    //on fait appel à la procédure qui nous affiche le triangle
    ecrireetoile(n);

    return 0;
}