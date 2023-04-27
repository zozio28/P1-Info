#include "testsUnitaires.h"
#include <stdio.h>
#include <stdlib.h>

/*-------------FONCTIONS-------------*/

int F1(int nb){
  int  res=0;
  int  tmp=0;

  while(nb!=0){
    tmp = nb % 2;
    res = res * 10 + tmp;
    nb = nb / 2;
  }
  return res;
}

int F2(int nb,  int acc){
  if (nb == 0) {
    return acc;
  } else {
    return F2(nb/2,  acc*10 +(nb%2));
  }
}

/*-------------TESTS-------------*/

void testF1_1(){
    int nb = 1;
    if (F1(nb)==1){
        printf("F1(1) SUCCEED ! \n");
    }else{
        printf("F1(1) FAIL ! \n");
    }
}

void testF1_25(){
    int nb = 25;
    if(F1(nb==11001)){
        printf("F1(25) SUCCEED ! \n");
    }else{
        printf("F1(25) FAIL ! \n");
    }
}

void testF1_0(){
    int nb = 0;
    if(F1(nb==0)){
        printf("F1(0) SUCCEED ! \n");
    }else{
        printf("F1(0) FAIL ! \n");
    }
}

void testF1_10(){
    int nb = 10;
    if(F1(nb==1010)){
        printf("F1(10) SUCCEED ! \n");
    }else{
        printf("F1(10) FAIL ! \n");
    }
}

void testF2_1(){
    int nb = 1;
    if(F2(nb,0)==1){
        printf("F2(1) SUCCEED ! \n");
    }else{
        printf("F2(1) FAIL ! \n");
    }
}

void testF2_0(){
    int nb = 0;
    if(F2(nb,0)==0){
        printf("F2(0) SUCCEED ! \n");
    }else{
        printf("F2(0) FAIL ! \n");
    }
}

void testF2_25(){
    int nb = 25;
    if(F2(nb,0)==11001){
        printf("F2(25) SUCCEED ! \n");
    }else{
        printf("F2(25) FAIL ! \n");
    }
}

void testF2_10(){
    int nb = 10;
    if(F2(nb,0)==1010){
        printf("F2(10) SUCCEED ! \n");
    }else{
        printf("F2(10) FAIL ! \n");
    }
}