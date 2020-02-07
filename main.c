#include "b_tree.h"

int main()
{
    int qntNode = 0;
    TNode * tree = init();
    printf("Digite a quantidade maxima de nós");
    scanf("%i", qntNode);

    int i; int vector[20];
    for(i = 0; i < 20; i++)
    {
        vector[i] = i;
    }

    tree = createTree(0, 20, vector);
    printTree(tree);

    int max[20];
    int child[20];
    int gChild[20];
    return 0;
}