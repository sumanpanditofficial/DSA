// Find min and max element of an array
#include <bits/stdc++.h>
using namespace std;

int minimum(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}
int maximum(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << i << " element= ";
        cin >> arr[i];
    }
    cout << "Maximum= " << maximum(arr, size) << endl;
    cout << "Minumum= " << minimum(arr, size) << endl;
    return 0;
}