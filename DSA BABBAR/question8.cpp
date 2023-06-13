// Check the given integer is a power of two or not
#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    int ans = 1;
    for (int i = 0; i < 31; i++)
    {
        if (ans == n)
        {
            return true;
        }
        ans = ans * 2;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool ans = check(n);
    if (ans == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}