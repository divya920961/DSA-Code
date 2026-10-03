#include <iostream>
using namespace std;
int main()
{

    int Angle_1 = 0, Angle_2, Angle_3;
    cout << "Enter First Angle : ";
    cin >> Angle_1;
    cout << "Enter Second Angle : ";
    cin >> Angle_2;

    Angle_3 = 180 - (Angle_1 + Angle_2);
    cout << endl
         << "Third angle is : " << Angle_3 << endl;

    return 0;
}