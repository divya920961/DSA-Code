#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
    return 0;
}