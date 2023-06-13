#include <stdio.h>
#include <stdlib.h>
int arr[100];
int a = 0;
void CreateArr(int data)
{
    arr[a] = data;
    a++;
}
void insertion_sort(int last)
{
    int temp, j;
    for (int i = 1; i < last; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    insertion_sort(size);
    printf("\n");
    display(size);
    printf("\n");
    return 0;
}