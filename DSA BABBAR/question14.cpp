// Reverse a array
#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int end)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
}

void reverse(int arr[], int size)
{
    int end = size-1;
    int half = size / 2;
    for (int i = 0; i < half; i++)
    {
        swap(arr, i, end);
        end--;
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "     ";
    }
}

int main()
{
    int arr[100], size;
    cout << "Enter the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }
    cout << "Initial array" << endl;
    display(arr, size);
    cout << endl;
    cout << "Reverse array" << endl;
    reverse(arr, size);
    display(arr, size);
    return 0;
}