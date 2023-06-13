// Convert decimal into binary
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter the decimal number: ";
    cin >> n;
    a = n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << a << " = " << ans;
    return 0;
}