#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    cout << "Enter hours: "; // 24
    cin >> hours;
    cout << "Enter minutes: "; // 59
    cin >> minutes;

    if ((hours >= 0 && hours < 12) && (minutes < 60 && minutes>=0 ))
    {
        cout << "Its AM";
    }
    else if ((hours >= 12 && hours < 24) && (minutes < 60 && minutes>=0 ))
    {
        cout << "Its PM";
    }
    else
    {
        cout << "Enter Valid time !";
    }
    return 0;
}