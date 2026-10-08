#include <iostream>
using namespace std;

int main()
{

    for (int i=1; i <= 100; i++)
    {
        int temp = 0;
        int sum = 0;

        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}