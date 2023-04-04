#include <stdio.h>
#include <stdlib.h>

typedef struct NodeElement{
  int value;
  struct NodeElement* next;
};

//définition de mon type pile STACK
typedef NodeElement* Stack;

//affichage de la pile
void affichage(Stack* stack){
  stack = stack->first;
  while (stack != NULL){
      printf("%d \n", stack->value);
      stack = stack->next;
  }
}

//enlever des éléments
void remove(Stack* stack){
  NodeElement* removeNode = stack->first;
}

void add(Stack* stack, int value){
  NodeElement* newNode=malloc(sizeof(NodeElement));
  newNode->value=value;
  newNode->next=*stack;
  *stack = newNode;
}

int main(){
  NodeElement* stack=NULL;
  return 0;
}
