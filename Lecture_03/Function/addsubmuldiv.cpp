#include <iostream>
using namespace std;

int add(int x,int y){
return x+y;}

int sub(int x,int y){
return x-y;}

int mul(int x,int y){
return x*y;}

int module(int x,int y){
return x%y;}




int main()
{
    int a,b;
    cout<<"Enter num 1:";
    cin>>a;
    cout<<"Enter num 2:";
    cin>>b;
   cout<<add(a,b)<<endl;
   cout<<sub(a,b)<<endl;
   cout<<mul(a,b)<<endl;
   cout<<module(a,b)<<endl;

    return 0;
}