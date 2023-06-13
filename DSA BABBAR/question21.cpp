// You have been given an integer array/list(ARR) of size 'N'. It only contains Os, 1s and 2s.
// Write a solution to sort this array/list.
#include <bits/stdc++.h>
using namespace std;

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "     ";
    }
    cout << endl;
}

void sort(int *arr, int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if ((arr[left] == 1 && arr[right] == 0) && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
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
    cout << "Initial Array" << endl;
    display(arr, size);
    sort(arr, size);
    cout << "Final Array " << endl;
    display(arr, size);
    return 0;
}