// Number of 1 bits
#include <bits/stdc++.h>
using namespace std;
// int arr[100];
// int a = 0;

// void binary(int n)
// {
//     while (n != 0)
//     {
//         if (n % 2 == 0)
//         {
//             n = n / 2;
//             arr[a] = 0;
//             a++;
//         }
//         else if (n % 2 == 1)
//         {
//             n = n / 2;
//             arr[a] = 1;
//             a++;
//         }
//     }
// }
// void print(void)
// {
//     for (int i = a; i>=0; i--)
//     {
//         cout << " " << arr[i];
//     }
// }
int main()
{
    int n, a;
    cout << "Enter the number:";
    cin >> n;
    a=n;

    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    cout << a << " contains " << count << " one bits" << endl;
    // binary(654);
    // print();
    return 0;
}