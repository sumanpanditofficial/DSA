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
    if (rear == NULL)
    {
        front = rear = newNode;
        rear->next = front;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        newNode->next = front;
    }
}
void dequeue(void)
{
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else if (front == rear)
    {
        printf("\nThe deleted element id %d\n", front->data);
        front = rear = NULL;
        free(temp);
        printf("Now the stack is empty\n");
    }
    else
    {
        printf("\nThe deleted element id %d\n", front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
int peek(void)
{
    return front->data;
}
void display(void)
{
    struct node *temp;
    temp = front;
    while (temp->next != front)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("%d\t", temp->data);
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n----------------------------------\n");
        printf("1.Insert an element in queue\n");
        printf("2.Delete an element from queue\n");
        printf("3.See the peek element\n");
        printf("4.Display all elements in queue\n");
        printf("5.See the queue is empty or not\n");
        printf("6. Exit\n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            data = peek();
            printf("The peek element is %d\n", data);
            break;
        case 4:
            printf("All the elements of queue is\n");
            display();
            break;
        case 5:
            if (front == NULL && rear == NULL)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue is not empty\n");
            }
            break;

        case 6:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}