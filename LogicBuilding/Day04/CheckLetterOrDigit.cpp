#include <iostream>
using namespace std;

int main()
{

    char Character;
    cout << "Enter the Character: ";
    cin >> Character;
    if (Character >= 'A' && Character <= 'Z' || Character >= 'a' && Character <= 'z')
    {
        cout << "It is an letter";
    }
    else if (Character > 0)
    {
        cout << "It is an digit";
    }
    else
    {
        cout << "It is neither digit nor letter";
    }
}