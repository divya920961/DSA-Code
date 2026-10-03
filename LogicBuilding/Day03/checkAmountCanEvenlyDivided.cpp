#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter the Amount : ";
cin>>num;

if(num>0  && num%100==0){
    cout<<"Yes, Amount Can be evenly divided into 2000,500, and 100.";
}else{
    cout<<"No, Amount Can not be evenly divided into 2000,500, and 100.";
}

    return 0;
}