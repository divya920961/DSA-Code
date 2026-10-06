// check whether the day and month are valid
#include <iostream>
using namespace std;

int main()
{

    int day, month;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the month : ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day > 0 && day < 32)
        {
            cout << "Valid Day and Month";
        }
        else
        {
            cout << "Day is incorrect !";
        }
    }
    else if (month == 2)
    {
        if (day > 0 && day < 29)
        {
            cout << "Valid Day and Month";
        }
        else
        {
            cout << "Day is incorrect !";
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 0 && day < 31)
        {
            cout << "Valid Day and Month";
        }
        else
        {
            cout << "Day is incorrect !";
        }
    }
    else
    {
        cout << "Enter Valid Month !";
    }

    return 0;
}
