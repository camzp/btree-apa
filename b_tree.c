#include "b_tree.h"

TNode *randomizedTree(TNode *tree, int *vector);
void printTreeDinamic(TNode * node, int tab);
TNode * createNode(int value);

TNode * init() 
{
    return NULL; 
}

int printTree(TNode * node)
{
    if(node != NULL)
    {
        printTreeDinamic(node, 0);
        return 1;
    }
    return 0;
}

void printTreeDinamic(TNode * node, int tab)
{
    if(node->left != NULL) printTreeDinamic(node->left, tab + 1);

    int i;
    for(int i = 0; i < tab; i++)
    {
        printf("\T");
    }
    printf("%i[index = %d]\n", node->value, node->index);

    if(node->right != NULL) printTreeDinamic(node->right, tab + 1);
}

TNode * createTree(int init, int final, int * vector)
{
    if(init >= final)
        return NULL;

    int random = (rand() % (final + 1 - init)) + init;

    TNode * node = createNode(vector[random]);

    node->left = createTree(init, random - 1, vector);
    node->right = createTree(random, final, vector);

    return node;
}

TNode * createNode(int value)
{
    TNode * new;
    new = (TNode *) malloc(sizeof(TNode));
    new->right = NULL;
    new->left = NULL;
    new->value = value;
}

int pivot(int n) 
{
    return rand() % n;
}

TNode *randomizedTree(TNode *tree, int *vector)
{
    int n = sizeof(vector)/sizeof(int);
    int p = pivot(n);
}

void posOrdem(TNode *node)
{
    if(node != NULL){
        posOrdem(node->left);
        posOrdem(node->right);
        node->index +=1;
    }
}

void freeAll(TNode * node)
{
    if (node != NULL)
    {
        freeAll(node->left);
        freeAll(node->right);
        free(node);
    }
}
