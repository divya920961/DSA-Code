#include <iostream>
using namespace std;

int main()
{

    int units, bill;
    cout << "Enter the Units : ";
    cin >> units;

    if (units > 0 && units <= 100)
    {
        bill = units * 3;
        cout << "Your bill is : Rs." << bill;
    }
    else if (units > 100 && units <= 200)
    {
        bill = 100 * 3 + (units - 100) * 5;
        cout << "Your bill is : Rs." << bill;
    }
    else if (units > 200)
    {
        bill = 100 * 3 + 100 * 5 + (units - 200) * 7;
        cout << "Your bill is : Rs." << bill;
    }
    return 0;
}