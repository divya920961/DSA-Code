#include <iostream>
using namespace std;

int main()
{
    float temp;

    cout << "Enter temperature Value: ";
    cin >> temp;

    if (temp <= 5)
    {
        cout << "Cold";
    }
    else if (temp <= 40 && temp > 5)
    {
        cout << "Warm";
    }
    else
    {
        cout << "Hot";
    }
}