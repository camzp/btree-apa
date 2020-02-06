#include "b_tree.h"

TNode * randomize(TNode * node);
void printTreeDinamic(TNode * node, int tab);
TNode * createNode(int value);

TNode * init() 
{
    return NULL; 
}

int print(TNode * node, int tab)
{
    if(node != NULL)
    {
        printTreeDinamic(node, tab);
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
    printf("%i\n", node->value);

    if(node->right != NULL) printTreeDinamic(node->right, tab + 1);
}

TNode * createNode(int value)
{
    TNode * new;
    new = (TNode *) malloc(sizeof(TNode));
    new->right = NULL;
    new->left = NULL;
    new->value = value;
}

TNode * randomize(TNode * node)
{
    return NULL;
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