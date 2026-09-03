#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "Enter Number 3: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Number 1 is greater";
    }
    else if (num2 > num3)
    {
        cout << "Number 2 is greater";
    }
    else
    {
        cout << "Number 3 is greater";
    }
    return 0;
}