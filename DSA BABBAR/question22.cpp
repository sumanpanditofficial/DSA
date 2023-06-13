// Binary search
/*Requirements : Array should be sorted*/
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    /* we are applying the mid formula in a different way because if we just add start and end it can go beyond the
    size of an integer so to resolve that we are applying this formula*/
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr1[100] = {2, 5, 8, 10, 14, 23, 36, 67};
    int arr2[100] = {1, 23, 45, 67, 78, 87, 98, 101};
    int found1 = BinarySearch(arr1, 8, 23);
    cout << " 23 is present in " << found1 << " index" << endl;
    int found2 = BinarySearch(arr2, 8, 67);
    cout << " 67 is present in " << found2 << " index" << endl;
    int found3 = BinarySearch(arr1, 8, 89);
    cout << "89 is present in " << found3 << " index" << endl;

    return 0;
}