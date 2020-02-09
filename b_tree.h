#include <stdio.h>
#include <stdlib.h>
#include<time.h>

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
TNode * randomizedTree(TNode * tree, int * vector);
void printTreeDinamic(TNode * node, int tab);
TNode * createNode(int value);
int returnQntChild(int vector);
int returnQntGChild(int vector);
TNode * createTree(int init, int final, int * vector, int call);
