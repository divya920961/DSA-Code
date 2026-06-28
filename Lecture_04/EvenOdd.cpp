#include <iostream>
using namespace std;

int main()
{
    int odd = 0, even = 0;
    int number[10] = {1, 2, 3, 4, 8};
    for (int i = 0; i <= 4; i++)
    {
        if (number[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even number count :" << even << endl;
    cout << "Odd number count :" << odd;
    return 0;
}