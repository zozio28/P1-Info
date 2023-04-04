#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

typedef struct NodeElement{
  int value;
  struct NodeElement* next;
}NodeElement;

//définition de mon type pile STACK
typedef NodeElement* Stack;

int main(){
  NodeElement* stack=NULL;
  add(&stack,5);
  affStack(stack);
  return 0;
}
