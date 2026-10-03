#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Number : ";
    cin >> num;
    if(num<10 && num>-10){
        cout<<"Number is single Digit";
    }else if (num<100){
           cout<<"Number is Double Digit";
    }else{
           cout<<"Number is Multi Digit";
    }
}