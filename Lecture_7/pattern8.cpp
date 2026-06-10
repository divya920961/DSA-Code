#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number:";
    cin >> n;
    for (int i = 1; i <= n ; i++)
    {
          for (int j = 1; j <= i-1 ; j++)
        {
            cout << " ";
        }
        for (int r = 1 ; r <= 2*(n-i)+1 ; r++)
        {
            cout << "*";
        }
      

        cout << endl;
    }

    return 0;
}