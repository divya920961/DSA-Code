
//my approach
#include <iostream>
using namespace std;

int main()
{
    int num, last = 0, num1=0, num2=0, num3=0;

    cout << "Enter Number :";
    cin >> num; //456
    for (int i = 0; i < 3; i++)
    {
        last = num % 10;
        num /= 10;
        num3 = num2;
        num2 = num1;
        num1 = last;
      
    }
    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2<<endl;
    cout << "num 3: " << num3 << endl;
    if(num2>num1 &&num2>num3){
        cout<<"Middle number is greater";
    
    } else   if  (num2<num1 &&num2<num3){
        cout<<"Middle number is Smaller";
    
    }else {
        cout<<"Middle number is neither greater nor small";
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, first, middle, last;

//     cout << "Enter a 3-digit number: ";
//     cin >> num;

//     first = num / 100;
//     middle = (num / 10) % 10;
//     last = num % 10;

//     if (middle > first && middle > last)
//         cout << "Middle digit is the largest";
//     else if (middle < first && middle < last)
//         cout << "Middle digit is the smallest";
//     else
//         cout << "Middle digit is neither largest nor smallest";

//     return 0;
// }