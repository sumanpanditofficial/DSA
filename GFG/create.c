#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0 ,*newNode, *temp;

void input()
{
    
    int choice=1;
    while (choice!=0)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to continue 1 or 0: ");
        scanf("%d", &choice);
    }
}
void output()
{
   
    temp=head;
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp=temp->next;
        
        
    }
}
int main()
{
    input();
    output();
    return 0;
}