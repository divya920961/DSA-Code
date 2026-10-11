#include <iostream>
using namespace std;

int main()
{

    int n, power, ans = 0;
    cout << "Enter Number : ";
    cin >> n;
    // cout << "Enter the power of number : ";
    // cin >> power;

    for (int i=1; i <= (2*n-1); i++)
    {
        if (i % 2 != 0)
        {
            ans += i;
        }
       
    }
    cout << "Power of number :" <<ans;
    return 0;
}