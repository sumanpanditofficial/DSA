#include <stdio.h>
#include <stdlib.h>
int Top = -1;
char S[100];
void push(char c)
{
    if (Top == 99)
    {
        printf("Stack overflow\n");
        return;
    }
    Top++;
    S[Top] = c;
}
char pop(void)
{
    if (Top == -1)
    {
        printf("stack underflow\n");
        exit(1);
    }
    char value;
    value = S[Top];
    Top--;
    return value;
}
void check_palindrome(char *c)
{
    int i = 0;
    while (c[i] != 'X')
    {
        push('c');
        i++;
    }
    i++;
    while (c[i])
    {
        if (Top == -1 || c[i] != pop())
        {
            printf("Not palindrome\n");
            exit(1);
        }
        i++;
    }
    if (Top == -1)
    {
        printf("Palindrome\n");
    }
}

int main()
{
    char C[100];
    printf("Enter the character you want to check\n");
    scanf("%s", C);
    check_palindrome(C);
    return 0;
}