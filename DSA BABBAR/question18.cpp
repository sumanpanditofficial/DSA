// //You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are
// sorted in non-decreasing order. You have to find the intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common elements occurring
// in both arrays.
#include <bits/stdc++.h>
using namespace std;

/* One basic approach is check every element by using double loop and store it in the array but it will exceed
the time complexity so, will will do the different approach as given below*/

vector<int> intersection(int arr1[], int arr2[], int size1, int size2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int arr1[100], arr2[100], size1, size2;
    ;
    cout << "Enter the size1 of array: ";
    cin >> size1;
    cout << "Enter the size2 of array: ";
    cin >> size2;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr2[i];
    }
    vector<int> ans = intersection(arr1, arr2, size1, size2);
    return 0;
}