// Complement of base 10 integer
#include <bits/stdc++.h>
using namespace std;

int Complement(int n)
{
    int demon = 0;
    int a = n;
    int ans;
    while (n != 0)
    {
        demon = (demon << 1) | 1;
        n = n >> 1;
    }
    ans = (~a) & demon;
    return ans;
}

int main()
{
    int n;
    cout << "Enter ther number:";
    cin >> n;
    int ans = Complement(n);
    cout << "Complement of " << n << " is " << ans;
    return 0;
}