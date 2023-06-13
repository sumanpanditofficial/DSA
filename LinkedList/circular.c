#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = 0, *newNode, *temp, *start, *last;
void create()
{
    int choice = 1;
    while (choice != 0)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data \n");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = temp = start = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        temp->next = start;
        printf("Do you want to continue 0 or 1: ");
        scanf("%d", &choice);
    }
}
void output()
{
    temp = head;
    do
    {
        printf("  %d  ", temp->data);
        temp = temp->next;
        if (temp != start)
        {
            printf("->");
        }
        else
        {
            printf("");
        }
    } while (temp != start);
}
void ends()
{
    printf("\nAt end");
    temp = head;
    struct node *end;
    while (temp->next != start)
    {
        end = temp;
        temp = temp->next;
    }
    end = end->next;
    printf("\n%d", end->data);
    printf("\n%u", end->next);
    printf("\n %u", head);
}

void fun(struct node *start)
{

    if (start == NULL)
        return;

    printf("%d ", start->data);
    if (start->next != NULL)
        fun(start->next->next);

    printf("%d", start->data);
}

int main()
{
    create();
    output();
    ends();
    fun(head);
    return 0;
}