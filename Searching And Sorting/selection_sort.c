#include <stdio.h>
#include <stdlib.h>
int arr[100];
int a=0;
void CreateArr(int data)
{
    arr[a] = data;
    a++;
}
void swap(int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void selection_sort(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(i, min);
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
        printf("Enter the value for %dth index: ", i);
        scanf("%d", &temp);
        CreateArr(temp);
    }
    printf("\n");
    selection_sort(size);
    printf("\n");
    display(size);
    printf("\n");

    return 0;
}