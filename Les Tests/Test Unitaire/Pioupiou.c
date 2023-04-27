#include "testsUnitaires.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  printf("%d \n",F1(1));
  printf("%d \n",F2(1,0,1));
  printf("%d \n",F1(3));
  printf("%d \n",F2(3,0,1));
  printf("%d \n",F1(5));
  printf("%d \n",F2(5,0,1));
  printf("%d \n",F1(17));
  printf("%d \n",F2(17,0,1));

  printf("\n---------TESTS---------\n\n");

  testF1_1();
  testF1_25();
  testF1_0();
  testF1_10();
  testF2_1();
  testF2_0();
  testF2_25();
  testF2_10();

  return 0;
}

int F1(int nb){
  int res=0;
  int tmp=0;
  int count=1;

  while(nb!=0){
    tmp = nb % 2;
    res = res + tmp*count;
    nb = nb / 2;
    count = count*10;
  }
  return res;
}

int F2(int nb,  int acc, int acc2){
  if (nb == 0) {
    return acc;
  } else {
    return F2(nb/2, acc +(nb%2)*acc2,acc2*10);
  }
}