#include <iostream>
using namespace std;
int main()
{
    int age;
    int income;

    cout << "Enter Your Age : ";
    cin >> age;
    cout << "Enter Your Income : ";
    cin >> income;
    if (age <= 0 || income < 0 || age >= 101)
    {
        cout << "Enter valid age and income!";
    }
    else if (age >= 18 && income > 500000)
    {
        cout << "you are eligible for paying tax";
    }
    else
    {
        cout << "You are not eligible for paying tax ";
    }
    return 0;
}