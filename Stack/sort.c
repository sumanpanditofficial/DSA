#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *Top;
struct node *Top1;
void Push(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    newNode->link = Top;
    Top = newNode;
}
int Pop(void)
{

    struct node *temp;
    temp = Top;
    int value = temp->data;
    Top = Top->link;
    free(temp);
    return value;
}
void Push1(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;
    newNode->link = Top1;
    Top1 = newNode;
}
int Pop1(void)
{

    struct node *temp;
    temp = Top1;
    int value = temp->data;
    Top1 = Top1->link;
    free(temp);
    return value;
}
int peek(void)
{
    return Top->data;
}
int peek1(void)
{
    return Top1->data;
} 
void Display(void)
{
    struct node *temp;
    temp = Top1;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->link;
    }
}

int main()
{
    int N, M;
    printf("Enter the number of stacks you want: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &M);
        Push(M);
    }
    while (Top != NULL)
    {
        int A = peek();
        Pop();
        while ((Top1 != NULL) && peek1() < A)
        {
            Push(peek1());
            Pop1();
        }
        Push1(A);
    }
    printf("Elements you have entered \n");
    printf("\n");
    printf("Sorted Stack\n");
    Display();
}