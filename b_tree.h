#include <stdio.h>
#include <stdlib.h>

typedef struct tnode 
{
    int value;
    int index;
    struct node * left;
    struct node * right;
} TNode;

TNode * init();
int print(TNode * node, int tab);
void freeAll(TNode * node);
// TNode returnChild(TNode *node);
// TNode returnGChild(TNode *node);
int returnQntChild(int vector);
int returnQntGChild(int vector);
