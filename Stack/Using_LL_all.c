#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *Top;
int IsEmpty(void)
{
    if (Top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
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
    if (IsEmpty())
    {
        printf("Stack UnderFlow\n");
        exit(1);
    }
    struct node *temp;
    temp = Top;
    int value = temp->data;
    Top = Top->link;
    free(temp);
    return value;
}
void Display(void)
{
    if (IsEmpty())
    {
        printf("Stack UnderFlow\n");
        exit(1);
    }
    struct node *Temp;
    Temp = Top;
    while (Temp)
    {
        printf(" %d -> ", Temp->data);
        Temp = Temp->link;
    }
    printf("\n");
}

int peek(void)
{
    if (IsEmpty())
    {
        printf("Stack UnderFlow\n");
        exit(1);
    }
    return Top->data;
}
int main()
{
    int data, choice;
    while (1)
    {
        printf("1.Enter a data in Stack\n");
        printf("2.Delete a Data from the stack\n");
        printf("3. See the Peek value\n");
        printf("4.See the stack is Empty or Not\n");
        printf("5.Display all the elements of stack\n");
        printf("6.Exit\n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data you want to insert: ");
            scanf("%d", &data);
            Push(data);
            break;
        case 2:
            printf("%d is successfully deleted from stack\n", Pop());
            break;
        case 3:
            printf("The Peek value is %d \n", peek());
            break;
        case 4:
            if (IsEmpty() == 1)
            {
                printf("No the stack is not empty\n");
            }
            else if (IsEmpty() == 0)
            {
                printf("The stack is empty\n");
            }
            break;
        case 5:
            printf("All the elements of stack is given below\n");
            Display();
            break;
        case 6:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}         