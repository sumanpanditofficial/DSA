#include <stdio.h>
#include <stdlib.h>
int arr[100];
int arr1[100];
int a = 0;
int i, j, k;
void CreateArr(int data)
{
    arr[a] = data;
    a++;
}

void merge(int lb, int mid, int ub)
{
    i = lb;
    j = mid + 1;
    k = lb;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            arr1[k] = arr[i];
            i++;
        }
        else
        {
            arr1[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            arr1[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            arr1[k] = arr[i];
            i++;
            k++;
        }
    }
}

void merge_sort(int lb, int ub)
{
    if (lb < ub)
    {
        int mid = ((lb + ub) / 2);
        merge_sort(lb, mid);
        merge_sort(mid + 1, ub);
        merge(lb, mid, ub);
    }
}

void copyAll(int last)
{
    for (int i = 0; i < last; i++)
    {
        arr[i] = arr1[i];
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
    merge_sort(0, size);
    printf("\n");
    copyAll(size);
    display(size);
    printf("\n");
    return 0;
}