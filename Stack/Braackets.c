#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
char S[max];
int Top = -1;
int IsFull(void)
{
    if (Top == max - 1)
        return 1;
    else
        return 0;
}
int IsEmpty(void)
{
    if (Top == -1)
        return 1;
    else
        return 0;
}
void push(char c)
{
    if (IsFull())
    {
        printf("Stack Overflow\n");
        return;
    }
    Top++;
    S[Top] = c;
}
char pop(void)
{
    if (IsEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    char value;
    value = S[Top];
    Top--;
    return value;
}
int checking(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int check(char *s)
{
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
        }
        if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (IsEmpty())
            {

                return 0;
            }
            else if (!checking(pop(), s[i]))
            {

                return 0;
            }
        }
        if (IsEmpty())
        {
            return 1;
        }
    }
}

int main()
{
    char c[100];
    printf("Enter the expression\n");
    gets(c);
    int D = check(c);
    if (D == 1)
    {
        printf("Valid \n");
    }
    else
    {
        printf("Not valid\n");
    }
    return 0;
}