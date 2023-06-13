#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    top++;
    stack_arr[top] = data;
}
int pop(void)
{
    int value;
    if (top == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top--;
}
void print(void)
{
    if (top == -1)
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
    int data;
    push(1);
    push(2);
    push(3);
    push('C');
    print();
    return 0;
}