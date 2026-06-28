#include <iostream>
using namespace std; //use here because we have to write std:: for each line thats why 


int main()
{
cout<<"Hello Divya !"<<endl;  // :: scope resolution operator

//integer datatype
int age=18;
cout<<sizeof(age)<<endl;

//float datatype
float f= 90.9999;
cout<<sizeof(f)<<endl;

//double datatype
double d= 90.919;
cout<<sizeof(d)<<endl;

//string datatype
string s="hii i am divya";
cout<<sizeof(s)<<endl;  

//boolean datatype
bool b=true;
cout<<sizeof(b)<<endl; 

//how to take input
 int n1=0,n2=0;
// cout<<"Enter first num:";
// cin>>n1;
// cout<<"Enter second num:";
// cin>>n2;
// cout<<"First number is :"<<n1<<endl;
// cout<<"Second number is :"<<n2;

//post-increament
int a=10;
cout<<a++<<endl;
cout<<a;

int m=20;
cout<<m--<<endl;
cout<<m;

// pre-increament
int p=5;
cout<<++p<<endl;
cout<<p;

int r=20;
cout<<--r<<endl;
cout<<r;

return 0;
}