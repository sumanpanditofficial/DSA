// Implementation of binary tree only to create
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
    newNode->data = x;
    printf("Enter the left child of %d node \n", x);
    newNode->left = create();
    printf("Enter the right child of %d node \n", x);
    newNode->right = create();
    return newNode;
}

int search(struct node *root, int check)
{
    while (root != NULL)
    {
        if (check > root->data)
        {
            root = root->right;
        }
        else if (check < root->data)
        {
            root = root->left;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int data = 5;
    struct node *root;
    root = create();
    int checker = search(root, data);
    if (checker == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
