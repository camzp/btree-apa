#include "b_tree.h"

int main()
{
    int qntNode = 0;
    TNode * tree = init();
    printf("Digite a quantidade maxima de nós: ");
    scanf("%i", &qntNode);

    int i; int vector[qntNode];
    for(i = 0; i <qntNode; i++)
    {
        vector[i] = i;
    }

    tree = createTree(0, qntNode, vector);
    printTree(tree);

    int max[20];
    int child[20];
    int gChild[20];
    return 0;
}