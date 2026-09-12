#include <iostream>
using namespace std;

int main()
{
    int side1 = 0, side2 = 0, side3 = 0;
    cout << "Enter 1st side of a Triangle: ";
    cin >> side1;
    cout << "Enter 2nd side of a Triangle: ";
    cin >> side2;
    cout << "Enter 3rd side of a Triangle: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3)
    {
        cout << "It is an equilateral Triangle";
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        cout << "It is an Isosceles triangle";
    }
    else
    {
        cout << "It is a scelene Triangle";
    }

    return 0;
    
}