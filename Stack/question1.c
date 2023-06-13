#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int first = -1;
int stack_arr[MAX];
int IsFull(void)
{
    if (first == MAX - 1)
        return 1;
    else
        return 0;
}
int IsEmpty(void)
{
    if (first == -1)
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
    first += 1;
    for (int i = first; i > 0; i--)
    {
        stack_arr[i] = stack_arr[i - 1];
    }
    stack_arr[0] = data;
}
int pop(void)
{
    if (first == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    int value;
    value = stack_arr[0];
    for (int i = 0; i < first; i++)
    {
        stack_arr[i] = stack_arr[i + 1];
    }
    first -= 1;
    return value;
}
void display(void)
{
    if (first == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    for (int i = 0; i <= first; i++)
    {
        printf("%d -> ", stack_arr[i]);
    }
    printf("\n");
}
int peek(void)
{
    if (IsEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[0];
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    printf("The deleted element is %d\n", pop());
    printf("The peek element is %d \n", peek());
    display();
    return 0;
}