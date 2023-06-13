#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, n, c;
    cout << "Enter the number of fibonacci series you want to print: ";
    cin >> n;
    cout << a << " " << b;
    for (int i = 0; i < n; i++)
    {
        cout << " " << a + b;
        c = b;
        b = a + b;
        a = c;
    }
    return 0;
}