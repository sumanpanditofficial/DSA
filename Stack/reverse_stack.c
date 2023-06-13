// TO reverse a stack using two temporary stack
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *Top = NULL;
struct node *Top1 = NULL;
struct node *Top2 = NULL;

void Push(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Stack UnderFlow");
        return;
    }
    newNode->data = data;
    newNode->link = NULL;
    newNode->link = Top;
    Top = newNode;
}
void Push1(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Stack UnderFlow");
        return;
    }
    newNode->data = data;
    newNode->link = NULL;
    newNode->link = Top1;
    Top1 = newNode;
}
void Push2(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Stack UnderFlow");
        return;
    }
    newNode->data = data;
    newNode->link = NULL;
    newNode->link = Top2;
    Top2 = newNode;
}
int pop(void)
{
    struct node *temp;
    temp = Top;
    int value = temp->data;
    Top = Top->link;
    free(temp);
    return value;
}
int pop1(void)
{
    struct node *temp;
    temp = Top1;
    int value = temp->data;
    Top1 = Top1->link;
    free(temp);
    return value;
}
int pop2(void)
{
    struct node *temp;
    temp = Top2;
    int value = temp->data;
    Top2 = Top2->link;
    free(temp);
    return value;
}
void Display(void)
{
    struct node *temp;
    temp = Top;
    while (temp)
    {
        printf(" %d -> ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int N, n;
    printf("How many elements you want in your stack: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("Enter the %d element in stack:  ", i + 1);
        scanf("%d", &n);
        Push(n);
    }
    Display();
    for(int i=0; i<N; i++){
        Push1(pop());
    }
    for (int i=0; i<N; i++){
        Push2(pop1());
    }
    for(int i=0; i<N; i++){
        Push(pop2());
    }
    printf("\n");
    printf("The Reverse of stack is\n");
    Display();

    
    return 0;
}