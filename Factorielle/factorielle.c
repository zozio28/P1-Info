#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
  if (n==0){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}

int tfactorial(int n, int acc){
  if (n==0){
    return acc;
  }else{
    return tfactorial(n-1,acc*n);
  }
}

int main(){

  printf("%d \n", factorial(10));
  printf("%d \n", tfactorial(10,1));

  return 0;
}
