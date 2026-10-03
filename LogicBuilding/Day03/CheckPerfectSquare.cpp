#include<iostream>
using namespace std;

int main(){
    int num,temp, odd=1;
    cout<<"Enter the number: ";
    cin>>num;
 while (temp>0){
    temp= num-odd;
    odd=odd+2;
 }
if(temp==0 && num>=0){
    cout<<num<<" is perfect square number";
}else{
    cout<<num<<" is not perfect square number";
}
    return 0;
}