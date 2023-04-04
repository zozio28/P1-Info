#ifndef __pile_H_
#define __pile_H_

typedef struct NodeElement NodeElement;

//définition de mon type pile STACK
typedef NodeElement* Stack;

void add(Stack* stack, int value);
void pop(Stack* stack);
void affStack(NodeElement* node);

#endif
