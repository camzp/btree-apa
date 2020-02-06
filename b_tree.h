#include <stdio.h>
#include <stdlib.h>

typedef struct tnode 
{
    int value;
    struct node * left;
    struct node * right;
} TNode;

TNode * init();
int print(TNode * node, int tab);
void freeAll(TNode * node);