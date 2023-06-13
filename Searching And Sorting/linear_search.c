#include <stdio.h>
#include <stdlib.h>
#define max 10
int arr[max];
int found = 0;
int i = 0;
void create(int data)
{
    arr[i] = data;
    i++;
}
void search(int data)
{
    for (int i = 0; i < max; i++)
    {
        if (arr[i]==data)
        {
            printf("%d found in the list at index %d \n", data, i);
            found = 1;
            break;
        }
    }
    if (found != 1)
    {
        printf("%d not found in the list\n", data);
    }
}
int main()
{
    int data;
    for (int i = 0; i < max; i++)
    {
        printf("Enter the data at index %d: ", i);
        scanf("%d", &data);
        create(data);
    }
    printf("Enter the data you want to search: ");
    scanf("%d", &data);
    search(data);
    return 0;
}
/*
Time Complexity
Best Case: 0(1);
Worst Case: 0(n);
Average Case: sum of all cases / no. of cases = (n+1)/2
*/