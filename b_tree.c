#include "b_tree.h"

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
    if(node != NULL)
    {
        if(node->left != NULL) printTreeDinamic(node->left, tab + 1);

        int i;
        for(int i = 0; i < tab; i++)
        {
            printf("--");
        }
        printf("%d\n", node->value);

        if(node->right != NULL) printTreeDinamic(node->right, tab + 1);
    }
}

TNode * createTree(int init, int final, int * vector, int call)
{
    //printf("Call = %i init = %i final = %i\n",call, init, final);

    //if(call > final) return NULL;

    if(init >= final)
        return NULL;

    if(init == final - 1)
    {
        TNode * node = createNode(vector[init]);
        return node;
    }

    srand(time(NULL));
    int random = (rand() % (final - 1 - init)) + init;

    printf("init = %i final = %i Rand = %i\n", init, final, random );

    TNode * node = createNode(vector[random]);
    node->left = createTree(init, random, vector, call + 1);
    node->right = createTree(random, final, vector, call + 1);

    return node;
}

TNode * createNode(int value)
{
    TNode * new;
    new = (TNode *) malloc(sizeof(TNode));
    new->right = NULL;
    new->left = NULL;
    new->value = value;

    return new;
}

int pivot(int n) 
{
    return rand() % n;
}

TNode *randomizedTree(TNode *tree, int *vector)
{
    int n = sizeof(vector)/sizeof(int);
    int p = pivot(n);

    return NULL;
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
