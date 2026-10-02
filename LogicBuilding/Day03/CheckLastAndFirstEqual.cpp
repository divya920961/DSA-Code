#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, last = 0;
    cout << "Enter Number : ";
    cin >> num;

    first = num / 1000;
    cout << "First: " << first<<endl;
    last = num % 10;
    cout << "Last: " << last<<endl<<endl;

    if(first==last){
        cout<<"Both are same";
    
    }else{
        cout<<"Both are not same";
    }

    return 0;
}