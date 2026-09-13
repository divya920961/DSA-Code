#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter the number :";
    cin >> num;
    if (num == (-1 * abs(num)) && num != 0)
    {
        cout << "Given number is negative";
    }
    else if (num == 0)
    {
        cout << "Given number is 0";
    }
    else
    {
        cout << "Given number is Positive";
    }

    return 0;
}