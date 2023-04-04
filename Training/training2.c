#include <stdio.h>
#include <stdlib.h>

int pgcd(int a,int b){
    if (b==0){
        return a;
    }else{
        return pgcd(b,a%b);
    }
}

int puissanceRec(int a, int b){
    if (b==0){
        return 1;
    }else{
        return a*puissanceRec(a,b-1);
    }
}

int puissanceRecT(int a,int b,int acc){
    if (b==0){
        return acc;
    }else{
        return puissanceRecT(a,b-1,a*acc);
    }
}

int sommeChiffre(int n){
    if (n/10==0){
        return n;
    }else{
        return sommeChiffre(n/10) + (n%10);
    }
}

int sommeChiffreT(int n, int acc){
    if (n/10==0){
        return acc+1;
    }else{
        return sommeChiffreT(n/10,acc + n%10);
    }
}

void miroir(char* chaine, int taille){
    if(taille==0){
        printf(" ");
    }else{
        printf("%c", chaine[taille-1]);
        miroir(chaine,taille-1);
    }
}

int palindrome(char* chaine, int deb, int fin){
    if (deb>fin){
        return 1;
    }else{
        if(chaine[deb]==chaine[fin]){
            return palindrome(chaine, deb+1, fin-1);
        }else{
            return 0;
        }
    }
}

int main(){

    char* chaine = "kayak";

    printf("%d \n", pgcd(59,34));
    printf("%d \n", puissanceRec(2,5));
    printf("%d \n", puissanceRecT(2,5,1));
    printf("%d \n", sommeChiffre(2195));
    printf("%d \n", sommeChiffreT(2195,1));
    miroir(chaine,5);
    printf("\n %d \n", palindrome(chaine,0,4));

    return 0;
}