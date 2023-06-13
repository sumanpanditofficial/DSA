// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "     ";
    }
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

bool occurrence(int f[], int s[], int size)
{
    sort(f, size);
    int count;
    int k = 0;
    s[k] = s[k] + 1;
    int i = 0;
    while (i < size)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (f[i] == f[j])
            {
                count++;
                s[k] = s[k] + 1;
            }
            else
            {
                k++;
                s[k] = s[k] + 1;
                break;
            }
        }
        i = i += count;
    }

    sort(s, k + 1);
    for (int i = 0; i < (k - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int F_arr[100], S_arr[100] = {0}, size;
    cout << "Enter the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> F_arr[i];
    }
    int unique = occurrence(F_arr, S_arr, size);
    if (unique)
    {
        cout << "Yes! the number of occurrences of each value in the array is unique " << endl;
    }
    else
    {
        cout << "No! the number of occurrences of each value in the array is not unique" << endl;
    }
    return 0;
}