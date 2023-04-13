#include <stdio.h>
#include <stdlib.h>

typedef struct NodeElement{
  int value;
  struct NodeElement* next;
}NodeElement;

//définition de mon type pile STACK
typedef NodeElement* Stack;

//affichage de la pile
void affStack(NodeElement* node){
  if (node==NULL){
    return;
  }else{
    printf("%d \n", node->value);
    affStack(node->next);
  }
}

//enlever des éléments
void pop(Stack* stack){
  if (*stack == NULL){
    return;
  }
  NodeElement* popNode = *stack;
  *stack = (*stack)->next;
  free(popNode);
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
