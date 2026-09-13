#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    cout << "Enter the number :";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "Number is Divisible by 5";
    }
    else
    {
        cout << "Number is not Divisible by 5";
 
   }

   return 0;
}