// Find the unique element in an array if n=(2m+1)
#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "     ";
    }
}

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
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
    int ans = unique(arr, size);
    cout << "Unique=" << ans << endl;
    return 0;
}