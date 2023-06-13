#include <stdio.h>
#include <stdlib.h>
int arr[100];
int a = 0;
void create_arr(int data)
{
    arr[a] = data;
    a++;
}
void bubble_sort(int n)
{
    int warn, temp;
    for (int i = 0; i < n - 1; i++)
    {
        warn = 0;
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                warn = 1;
            }
        }
        if (warn == 0)
        {
            break;
        }
    }
}
void display(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr_size, temp;
    printf("Enter the size of array: ");
    scanf("%d", &arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter the %d index of array: ", i);
        scanf("%d", &temp);
        create_arr(temp);
    }
    printf("\n");
    printf("The sorted array is \n");
    printf("\n");
    bubble_sort(arr_size);
    printf("\n");
    display(arr_size);
    return 0;
}