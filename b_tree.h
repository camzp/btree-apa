#include <stdio.h>
#include <stdlib.h>

typedef struct tnode 
{
    int value;
    int index;
    struct tnode * left;
    struct tnode * right;
} TNode;

TNode * init();
int printTree(TNode * node);
void freeAll(TNode * node);
// TNode returnChild(TNode *node);
// TNode returnGChild(TNode *node);
int returnQntChild(int vector);
int returnQntGChild(int vector);
TNode * createTree(int init, int final, int * vector);
