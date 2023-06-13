// Swap the alternate elements of array
// #include <bits/stdc++.h>
// using namespace std;

// void swap(int arr[], int i, int j)
// {
//     int temp;
//     temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// void alternate(int arr[], int size)
// {
//     int j;
//     for (int i = 0; i < size; i++)
//     {
//         j = i;
//         swap(arr, i, (j + 1));
//         i++;
//     }
// }
// void display(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << "     ";
//     }
// }
// int main()
// {
//     int arr[100], size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the " << i << " element: ";
//         cin >> arr[i];
//     }
//     cout << "Initial array" << endl;
//     display(arr, size);
//     cout << endl;
//     cout << "Final array" << endl;
//     alternate(arr, size);
//     display(arr, size);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "     ";
    }
}
void alternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
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
    cout << "Initial array" << endl;
    display(arr, size);
    cout << endl;
    cout << "Final array" << endl;
    alternate(arr, size);
    display(arr, size);
    return 0;
}