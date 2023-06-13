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
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(start, end);
        }
    }
    swap(lb, end);
    return end;
}

void quick_sort(int lb, int ub)
{
    if (lb < ub)
    {
        int set = partition(lb, ub);
        quick_sort(lb, (set - 1));
        quick_sort((set + 1), ub);
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
    quick_sort(0, size-1);
    printf("\n");
    display(size);
    printf("\n");

    return 0;
}