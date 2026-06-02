#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number :";
    cin >> num;

    int arr[5] = {1, 22, 3, 4, 45};

    bool isfound = false;

    for (int i = 0; i <= 5; i++)
    {
        if (num == arr[i])
        {
            isfound = true;
        }
    }
    if (isfound)
    {
        cout << "Number is in array";
    }
    else
    {
        cout << "Not in array" << endl;
    }
    return 0;
}