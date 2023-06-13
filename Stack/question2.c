// Program to find the prime composite and display it in descending order
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
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    int value;
    value = stack_arr[top];
    top -= 1;
    return value;
}
void prime(int num)
{
    int i = 2;
    while (num != 1)
    {
        while (num % i == 0)
        {
            push(i);
            num = num / i;
        }
        i++;
    }
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
    printf("Enter the number that you want to find prime factor of \n");
    scanf("%d", &N);
    prime(N);
    printf("The prime factor of thr given number in descending order is \n");
    display();
}