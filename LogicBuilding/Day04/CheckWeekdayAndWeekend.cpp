#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter A Day Number : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Its Weekday !";
        break;
    case 2:
        cout << "Its Weekday !";
        break;
    case 3:
        cout << "Its Weekday !";
        break;
    case 4:
        cout << "Its Weekday !";
        break;
    case 5:
        cout << "Its Weekday !";
        break;
    case 6:
        cout << "Its Weekend !";
        break;
    case 7:
        cout << "Its Weekend !";
        break;
        
    default:
        cout << "Enter the Day number from 1-7 only !";
        break;
    }
}