#include "testsUnitaires.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  printf("%d \n",F1(1));
  printf("%d \n",F2(1,0));
  printf("%d \n",F1(3));
  printf("%d \n",F2(3,0));
  printf("%d \n",F1(5));
  printf("%d \n",F2(5,0));
  printf("%d \n",F1(17));
  printf("%d \n",F2(17,0));

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