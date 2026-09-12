#include <iostream>
using namespace std;

int main()
{
    int time = 0;
    cout << "Tell me the time : ";
    cin >> time;

    if (time >= 0 && time < 12)
    {
        cout << "Good Morning!";
    }
    else if (time >= 12 && time < 18)
    {
        cout << "Good Afternoon!";
    }
    else if (time >= 18 && time <= 21)
    {
        cout << "Good Evening!";
    }
    else if (time > 21 && time <= 24)
    {
        cout << "Good night!";
    }else{
        cout<<"Enter valid Time";
    }
}