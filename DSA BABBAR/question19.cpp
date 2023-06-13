// You are given an array array of size N containing each number between 1 and N - 1 at least
// once. There is a single integer value that is present in the array twice. Your task is to find the
// duplicate integer value present in the array.
#include <bits/stdc++.h>
using namespace std;

int DuplicateInteger(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
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
    int ans = DuplicateInteger(arr, size);
    cout << "Duplicate Integer: " << ans << endl;
    return 0;
}