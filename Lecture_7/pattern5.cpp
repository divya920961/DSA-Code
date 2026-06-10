#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1 ; j++) // here we do reverse but we have have improve logic thats why we make a formula
        {
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}