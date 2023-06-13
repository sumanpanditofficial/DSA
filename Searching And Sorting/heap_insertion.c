#include <stdio.h>
#include <stdlib.h>
int arr[100];
int a = 0;
void CreateArr(int data)
{
    arr[a] = data;
    a++;
}

void swap(int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insertion(int n, int value)
{
    int parent;
    n = n + 1;
    arr[n]=value;
    int i = n;
    while (i > 0)
    {
        parent = ((i - 1) / 2);
        if (arr[i] > arr[parent])
        {
            swap(i, parent);
            i = parent;
        }
        else
        {
            return;
        }
    }
}
void display(int last)
{
    for (int i = 0; i < last; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size, temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the for %dth index: ", i);
        scanf("%d", &temp);
        CreateArr(temp);
    }
    printf("\n");
    insertion(size-1, 8);
    printf("\n");
    display(size );
    printf("\n");
    return 0;
}

