#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

struct NodeElement{
  int value;
  struct NodeElement* next;
};

//ajouter des éléments
void add(Stack* stack, int value){
  NodeElement* newNode=malloc(sizeof(NodeElement));
  newNode->value=value;
  newNode->next=*stack;
  *stack = newNode;
}

// //enlever des éléments
void pop(Stack* stack){

}

//affichage de la pile
void affStack(NodeElement* node){
  if (node==NULL){
    return;
  }else{
    printf("%d \n", node->value);
    affStack(node->next);
  }
}
