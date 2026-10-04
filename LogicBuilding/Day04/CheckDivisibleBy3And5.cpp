#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "FizzBuzz...........";
    }
    else if (num % 3 == 0)
    {
        cout << "Fizz........";
    }
    else if (num % 5 == 0)
    {
        cout << "Buzz........";
    }
    else
    {
        cout << "Invalid number !";
    }
    return 0;
}