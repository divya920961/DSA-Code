#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
    {
        cout << "Median Value: " << num1;
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
    {
        cout << "Median Value : " << num2;
    }
    else
    {
        cout << "Median Value : " << num3;
    }

    return 0;
}