#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int arr[5] = {91, 3, 14, 90, 7};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}