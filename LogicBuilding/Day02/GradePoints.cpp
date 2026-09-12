#include <iostream>
using namespace std;

int main()
{
    float score = 0;

    cout << "Enter your marks : ";
    cin >> score;

    if (score >= 90 && score <= 100)
    {
        cout << "Your Grade is A";
    }
    else if (score >= 80 && score <= 89)
    {
        cout << "Your Grade is B";
    }
    else if (score >= 70 && score <= 79)
    {
        cout << "Your Grade is C";
    }
    else if (score >= 60 && score <= 69)
    {
        cout << "Your Grade is D";
    }
    else
    {
        cout << "You are fail!";
    }

    return 0;
}