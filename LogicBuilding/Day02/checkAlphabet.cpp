#include <iostream>
using namespace std;

int main()
{
    char ex;
    cout << "Enter the character : ";
    cin >> ex;

    if ('a' >= ex >= 'm')
    {
        cout << "Character present between a and m";
    }
    else if ('n' <= ex <= 'z')
    {
        cout << "Character present between n and z";
    }
    else
    {
        cout << "Error!";
    }
    return 0;
}