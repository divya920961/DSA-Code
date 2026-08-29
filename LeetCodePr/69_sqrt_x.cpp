#include <iostream>
using namespace std;

int sqrt(int n)
{
    int low = 0, high = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int val = mid * mid;
        if (val <= n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
};
int main()
{
    int num = 0;
    cout << "Enter Square root : ";
    cin >> num ;
    cout <<"Square Root of " <<num <<" is : "<<sqrt(num);
}