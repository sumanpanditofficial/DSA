#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *Top = NULL;

void push(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->next = Top;
    Top = newNode;
}
int pop(void)
{
    int value;
    struct node *temp;
    temp = Top;
    value = Top->data;
    Top = Top->next;
    free(temp);
    return value;
}
void check_palindrome(char *s)
{
    int i = 0;  
    while (s[i] != 'X')
    {
        push(s[i]);
        i++;
    }
    i++;
    while (s[i])
    {
        if (Top == NULL || s[i] != pop())
        {
            printf("not palindrome\n");
            exit(1);
        }
        i++;
    }
    if (Top == NULL)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
int main()
{
    char c[100];
    printf("Enter \n");
    scanf("%s", c);
    check_palindrome(c);
    return 0;
}