// Reverse a integer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter a number: ";
    cin >> n;
    a = n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << a << " = " << ans;
    return 0;
}