#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;

    cout << "Enter Number 1 :";
    cin >> num1;
    cout << "Enter Number 2 :";
    cin >> num2;
    cout << "Enter Number 3 :";
    cin >> num3;

    if (num1 - num2 == num2 - num3)
    {
        cout << "They are in Arithematic progression";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}