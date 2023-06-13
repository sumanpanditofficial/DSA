#include <stdio.h>
#include <stdlib.h>
#define max 10
int count = 0;
int top1 = -1, top2 = -1;
int stack1[max], stack2[max];
void push1(int data)
{
    top1++;
    stack1[top1] = data;
}
void push2(int data)
{
    top2++;
    stack2[top2] = data;
}
int pop1(void)
{
    return stack1[top1--];
}
int pop2(void)
{
    return stack2[top2--];
}
void enqueue(int data)
{
    if (top1 == max - 1)
    {
        printf("Overflow\n");
        return;
    }
    else
    {
        push1(data);
        count++;
    }
}
int dequeue(void)
{
    int value = stack1[0];
    if (top1 == -1)
    {
        printf("Underflow\n");
        exit(1);
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            push2(pop1());
        }
    }
    pop2();
    count--;
    for (int i = 0; i < count; i++)
    {
        push1(pop2());
    }
    return value;
}
int peek(void)
{
    return stack1[0];
}

void display(void)
{
    for (int i = 0; i <=top1; i++)
    {
        printf("%d\t", stack1[i]);
    }
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n------------------------------\n");
        printf("1. Insert element in queue\n");
        printf("2. Delete an element from queue\n");
        printf("3. See the peek element\n");
        printf("4.Display all elements of queue\n");
        printf("5.Check queue is empty or not\n");
        printf("6.Check queue is full or not\n");
        printf("7.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data:");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            printf("The deleted element is %d\n",dequeue());
            break;
        case 3:
            data = peek();
            printf("The peek element is %d\n", data);
            break;
        case 4:
            printf("Elements of queue are \n");
            display();
            break;
        case 5:
            if (top1==-1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue is not empty\n");
            }
            break;
        case 6:
            if (top1 == max - 1)
            {
                printf("Queue is full\n");
            }
            else
            {
                printf("Queue is not full\n");
            }
            break;
        case 7:
            exit(1);
        default:
            break;
        }
    }

    return 0;
}