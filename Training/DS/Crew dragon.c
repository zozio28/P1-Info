#include <stdio.h>
#include <stdlib.h>

struct etape{
    int num;
    int temps;
    char description;
};

struct alletapes{
    etape* chaine;
};

typedef struct etape etape;
typedef struct alletapes alletapes;

int nbtotal(alletapes etp){
    return etp.chaine;
}