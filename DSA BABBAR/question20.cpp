// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return
// the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int size, a;
    cout << "Enter the size of array: ";
    cin >> size;
    int s;
    cout << "Enter the number you want sum of: ";
    cin >> s;
    vector<int> v;

    for (int i = 0; i < size; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    vector<vector<int>> ans = pairSum(v, s);
    return 0;
}