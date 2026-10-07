#include <iostream>
using namespace std;

int main()
{

    int a, b, gcd, lcm;
    cout << "Enter first number :";
    cin >> a;
    cout << "Enter Second number :";
    cin >> b;
    int x = a, y = b;

    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    cout << " LCM :" << lcm;

    return 0;
}