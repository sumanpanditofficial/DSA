#include <stdio.h>
#define max 5
int Queue[max];
int front = -1;
int rear = -1;
void enqueue(int data)
{
    if (rear == max - 1)
    {
        printf("Underflow\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        Queue[rear] = data;
    }
    else
    {
        rear++;
        Queue[rear] = data;
    }
}
int dequeue(void)
{
    int value = Queue[front];
    if (front > rear)
    {
        printf("Empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    return value;
}
int peek(void)
{
    return Queue[front];
}
void display(void)
{
    int i;
    for (i = front; i < rear + 1; i++)
    {
        printf("%d\t", Queue[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    for (int i = 0; i < max; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &n);
        enqueue(n);
    }
    printf("\n");
    display();
    printf("\n");
    printf("The deleted element is %d\n", dequeue());
    printf("\n");
    display();
    printf("\n");
    printf("The peek element id %d\n",peek());
    printf("\n");
    return 0;
}