#include <iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;

    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        cout << "Both are even!";
    }
    else if (num1 % 2 == 0 || num2 % 2 == 0)
    {
        cout << "One is Even!";
    }
    else
    {
        cout << "Both are Odd!";
    }

    return 0;
}