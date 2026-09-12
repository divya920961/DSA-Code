#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;

    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    cout<<"Enter number 3 : ";
    cin>>num3;

    if(num1*num2 ==num3 || num2*num3==num1 || num1*num3 ==num2){
        cout<<"Its Multiple";
    }else {
        cout<<"It is not Multiple";
    }
}