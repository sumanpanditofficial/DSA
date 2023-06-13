// Take a amount and divide it into 100, 50, 20 and 1 to make a whole amount
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the amount: ";
    cin >> num;

    switch (1)
    {
        int value;
    case 1:
        if (num >= 100)
        {
            value = num / 100;
            cout << "You need " << value << " 100 " << endl;
            num = num - (100 * value);
        }

    case 2:
        if (num >= 50)
        {
            value = num / 50;
            cout << "You need " << value << " 50 " << endl;
            num = num - (50 * value);
        }
    case 3:
        if (num >= 20)
        {
            value = num / 20;
            cout << "You need " << value << " 20 " << endl;
            num = num - (20 * value);
        }
    case 4:
        if (num >= 1)
        {
            value = num / 1;
            cout << "You need " << value << " 1 " << endl;
            num = num - (1 * value);
        }
        break;
    default:
        cout << "Hello I am default" << endl;
        break;
    }
    return 0;
}