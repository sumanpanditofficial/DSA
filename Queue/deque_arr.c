#include <stdio.h>
#include<stdlib.h>
#define max 100
int deque[max];
int front = -1;
int rear = -1;
void enqueueFront(int data)
{
    if (rear + 1 == front || (front == 0 && rear == max - 1))
    {
        printf("Overflow\n");
        return;
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        deque[front] = data;
    }
    else if (front == 0)
    {
        front = max - 1;
        deque[front]=data;
    }
    else
    {
        front--;
        deque[front] = data;
    }
}
void enqueueRear(int data)
{
    if (rear + 1 == front || (front == 0 && rear == max - 1))
    {
        printf("Overflow\n");
        return;
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        deque[rear] = data;
    }
    else if (rear == max - 1)
    {
        rear = 0;
        deque[rear] = data;
    }
    else
    {
        rear++;
        deque[rear] = data;
    }
}
int dequeueFront(void)
{
    int value = deque[front];
    if (rear == -1 && front == -1)
    {
        printf("Underflow\n");
    }
    else if (rear == front)
    {
        front = rear = -1;
    }
    else if (front == max - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    return value;
}
int dequeueRear(void)
{
    int value = deque[rear];
    if (rear == -1 && front == -1)
    {
        printf("Underflow\n");
    }
    else if (rear == front)
    {
        rear = front = -1;
    }
    else if (rear == 0)
    {
        rear = max - 1;
    }
    else
    {
        rear--;
    }
    return value;
}
void display(void)
{
    int i = front;
    while (i != rear)
    {
        printf("%d\t", deque[i]);
        i = ((i + 1)% max);
    }
    printf("%d\t", deque[rear]);
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n------------------------------\n");
        printf("1. Perform enqueue front\n");
        printf("2. Perform enqueue rear\n");
        printf("3. Perform dequeue front\n");
        printf("4.Perform dequeue rear\n");
        printf("5.Display all elements of queue\n");
        printf("6.Check queue is empty or not\n");
        printf("7.Check queue is full or not\n");
        printf("8.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d", &data);
            enqueueFront(data);
            break;
        case 2:
            printf("Enter the data:");
            scanf("%d", &data);
            enqueueRear(data);
            break;
        case 3:
            data = dequeueFront();
            printf("The deleted element is %d\n", data);
            break;
        case 4:
            data = dequeueRear();
            printf("The deleted element is %d\n", data);
            break;
        case 5:
            display();
            break;
        case 6:
            if (front == -1 && rear == -1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue is not empty\n");
            }
            break;
        case 7:
            if (rear + 1 == front || (rear == 0 && front == max - 1))
            {
                printf("Queue is full\n");
            }
            else
            {
                printf("Queue is not full\n");
            }
            break;
        case 8:
            exit(1);
        default:
            break;
        }
    }

    return 0;
}