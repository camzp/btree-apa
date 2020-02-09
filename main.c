#include "b_tree.h"

int main()
{
    int qntNode = 0;
    TNode * tree = init();
    printf("Digite a quantidade maxima de nós: ");
    scanf("%i", &qntNode);

    int i; 
    int vector[qntNode];
    
    for(i = 0; i < qntNode; i++)
    {
        vector[i] = i;
    }

    tree = createTree(0, qntNode, vector, 0);
    printTree(tree);

    setIndex(tree);
    printIndex(tree);

    int max [qntNode];
    int child[qntNode];
    int gChild[qntNode];
    return 0;
}