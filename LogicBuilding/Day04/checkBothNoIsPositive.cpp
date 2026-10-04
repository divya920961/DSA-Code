#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    if (num1 > 0 && num2 > 0 && num1 + num2 < 100)
    {
        cout << "Both are positive and their sum is less than 100";
    }
    else
    {
        cout << "Condition are not match";
    }
    return 0;
}