#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    int arr[5] = {2, 3, 4, 5, 2};

    for (int i = 0; i < 5; i++) {
        result += arr[i];
    }
    cout << result;
    return 0;
}