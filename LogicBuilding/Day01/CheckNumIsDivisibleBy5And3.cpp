#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    cout << "Enter the number :";
    cin >> num;

    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "Number is Divisible by both 5 & 3";
    }
    else
    {
        cout << "Number is not Divisible by both 5 & 3";
    }

    return 0;
}