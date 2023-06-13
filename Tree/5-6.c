// Implementation of binary tree only to create
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int x; 
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data (Enter -1 for blank)\n");
    scanf("%d", &x);
    if (x == -1)
    {
        return NULL;
    }
    newNode->info = x;
    printf("Enter the left child of %d node \n", x);
    newNode->left = create();
    printf("Enter the right child of %d node \n", x);
    newNode->right = create();
    return newNode;
}
void TraverseInOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    TraverseInOrder(root->left);
    printf("%d\t", root->info);
    TraverseInOrder(root->right);
}
void TraversePreOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\t", root->info);
    TraverseInOrder(root->left);
    TraverseInOrder(root->right);
}
void TraversePostOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    TraverseInOrder(root->left);
    TraverseInOrder(root->right);
    printf("%d\t", root->info);
}
int main()
{
    struct node *root;
    root = create();
    TraverseInOrder(root);
    printf("\n");
    TraversePreOrder(root);
    printf("\n");
    TraversePostOrder(root);
    printf("\n");
    return 0;
}
