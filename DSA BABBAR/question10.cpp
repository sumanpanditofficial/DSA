#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a = 2;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
        else
        {
            cout << "Prime";
            break;
        }
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 15; i += 2)
//     {
//         cout << " " << i;
//         if (i & 1)
//         {
//             continue;
//         }
//         i++;
//     }
// }