#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;
void enqueue(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
int dequeue(void)
{
    struct node *temp;
    temp = front;
    int data = front->data;
    front = front->next;
    free(temp);
    return data;
}
void display(void)
{
    struct node *temp;
    temp = front;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int peek(void)
{
    return front->data;
}

int main()
{
    int N, c;
    printf("Enter the size\n");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &c);
        enqueue(c);
    }
    printf("\n");
    display();
    printf("\n");
    printf("The deleted element is %d \n", dequeue());
    printf("\n");
    display();
    printf("\n");
    printf("The peek element is %d \n", peek());
    printf("\n");
    printf("The deleted element is %d \n", dequeue());
    printf("\n");
    display();
    printf("\n");

    return 0;
}