#include <stdio.h>
#include <stdlib.h>

struct mission{
    int date;
    char* name;
};

struct CV{
    mission* nb;
    int taille;
};

struct astronaute{
    int age;
    char* name;
    char* prenom;
    CV cv;
};

struct attente{
    astronaute* file;
};

typedef struct mission mission;
typedef struct CV CV;
typedef struct astronaute astronaute;
typedef struct attente attente;

int nbmissions(CV astro){
    return astro.taille;
}

mission addmission(astronaute intel){
    int date;
    char nom[100];

    printf("Entrez une date de mission : ");
    scanf("%d", intel.cv.nb->date);
    printf("Entrez un nom de mission : ");
    scanf("%s", intel.cv.nb->name);

    return nbmissions;
}

int main(){
    CV astro;


}