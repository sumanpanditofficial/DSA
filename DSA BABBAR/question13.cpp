// Linear Search
#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[100], size, key;
    cout << "Enter the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }
    cout << "Enter the element you want to search: ";
    cin >> key;
    int found = search(arr, size, key);
    if (found)
    {
        cout << "Element is present in the list" << endl;
    }
    else
    {
        cout << "Element not present in the list" << endl;
    }
    return 0;
}