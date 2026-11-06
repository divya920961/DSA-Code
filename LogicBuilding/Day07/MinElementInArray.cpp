#include <iostream>
using namespace std;

int main()
{
    int min ;
    int arr[5] = {1, 3, 14, 0, -7};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min;

    return 0;
}