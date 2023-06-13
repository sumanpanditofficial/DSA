/*Requirements : Array should be sorted*/
#include <stdio.h>
#include <stdlib.h>
#define max 100
int arr[max];
int left;
int right;
int middle;
int i = 0;
void setData(int l, int r)
{
    left = l;
    right = r - 1;
}

void setArray(int data)
{
    arr[i] = data;
    i++;
}

void search(int data)
{
    while (left <= right)
    {

        middle = ((left + right) / 2);

        if (arr[middle] == data)
        {
            printf("The element %d is present in the %d index\n", data, middle);
            return;
        }
        else if (data > arr[middle])
        {
            left = middle + 1;
        }
        else if (data < arr[middle])
        {
            right = middle - 1;
        }
    }
    printf("The element %d is not found in the list\n", data);
}

int main()
{
    int a, temp, temp1;
    printf("Enter the size of array you want: ");
    scanf("%d", &temp);
    setData(0, temp);
    for (int i = 0; i < temp; i++)
    {
        printf("Enter the %dth element: ", i);
        scanf("%d", &temp1);
        setArray(temp1);
    }
    printf("Enter the data you want to search: ");
    scanf("%d", &a);
    search(a);
    return 0;
}