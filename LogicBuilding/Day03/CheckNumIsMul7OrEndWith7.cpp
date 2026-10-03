#include <iostream>
using namespace std;

int main()
{
    int num, last = 0;
    cout << "Enter Number : ";
    cin >> num;
    last = num % 10;

    if (num % 7 == 0 && last == 7)
    {
        cout << "Number is multiple of 7 &  ends with 7 ";
    }
    else if (num % 7 == 0)
    {
        cout << "Number is multiple of 7";
    }
    else if (last == 7)
    {
        cout << "Number is ends with 7 ";
    }
    else
    {
        cout << "Neither multiple of 7 nor ends with 7";
    }
    return 0;
}
