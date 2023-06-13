#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
int IsFull(void)
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}
int IsEmpty(void)
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if (IsFull())
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}
int pop(void)
{
    int value;
    if (IsEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top--;
}
void print(void)
{
    if (IsEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d->", stack_arr[i]);
    }
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("-------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Top element of stack\n");
        printf("4. Print all elements of stack \n");
        printf("5. exit\n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            printf("Enter the data you want to push \n");
            scanf("%d", &data);
            push(data);
            printf("\n");
            break;
        case 2:
            data = pop();
            printf("The deleted element is %d\n", data);
            printf("\n");
            break;
        case 3:
            printf("The top element of stack is %d \n", stack_arr[top]);
            printf("\n");
            break;
        case 4:
            printf("All the elements of stack is \n");
            print();
            printf("\n");
            break;
        case 5:
            exit(1);
        default:
            break;
        }
    }
}