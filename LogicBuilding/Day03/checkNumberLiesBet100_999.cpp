#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    if(num>100 && num<999){
        cout<<"Number is lies between 100 and 999";
    }else{
        cout<<"Number is not lies between 100 and 999";
    }
    return 0;
}