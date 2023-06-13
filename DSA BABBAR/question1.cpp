// Subtract the Product and Sum of Digits of an Integer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int pro = 1;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        pro = rem * pro;
        sum = sum + rem;
        n = n / 10;
    }
    cout << "Difference : " << pro - sum;
    return 0;
}