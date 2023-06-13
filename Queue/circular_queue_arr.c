#include <stdio.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if ((rear + 1) % max == front)
    {
        printf("Full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear = (rear + 1) % max;
        queue[rear] = data;
    }
}
int dequeue(void)
{
    int value = queue[front];
    if (front == -1 && rear == -1)
    {
        printf("Empty\n");
    }
    else if (front == rear)
    {

        front = rear = -1;
    }
    else
    {

        front = (front + 1) % max;
    }
    return value;
}
void display(void)
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Empty\n");
    }
    while (i != rear)
    {
        printf("%d\t", queue[i]);
        i = (i + 1) % max;
    }
    printf("%d\t", queue[i]);
    printf("\n");
}

int main()
{
    int N;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &N);
        enqueue(N);
    }
    printf("\n");
    display();
    printf("\n");
    printf("The deleted element is %d\n", dequeue());
    printf("\n");
    display();
    printf("\n");
    printf("The deleted element is %d\n", dequeue());
    printf("\n");
    display();
    printf("\n");
    enqueue(99);
    printf("\n");
    enqueue(77);
    printf("\n");
    display();
    printf("\n");
    printf("The deleted element is %d\n", dequeue());
    printf("\n");
    display();
    return 0;
}