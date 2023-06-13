#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack_arr[MAX];
int top = -1;
void push(int data)
{
    if (top == MAX)
    {
        printf("Stack Overflow\n");
        return;
    }
    top += 1;
    stack_arr[top] = data;
}
int pop(void)
{
    int value;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top -= 1;
    return value;
}
void BtoD(int num)
{
    while (num != 1)
    {
        if (num % 2 == 1)
        {
            push(1);
            num = (num - 1) / 2;
        }
        else if (num % 2 == 0)
        {
            push(0);
            num = num / 2;
        }
    }
    push(1);
}
void display(void)
{
    while (top != -1)
    {
        printf(" %d ", pop());
    }
    printf("\n");
}
int main()
{
    int N;
    printf("Enter a decimal number\n");
    scanf("%d", &N);
    BtoD(N);
    printf("Binary of given Decimal number is \n");
    display();
    return 0;
}