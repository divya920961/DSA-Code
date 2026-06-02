#include <iostream>
using namespace std; //use here because we have to write std:: for each line thats why 

int main()
{
    //
    int a=20,b=10;
    //Arithematic operation
    cout<<"ADD:"<<(a+b)<<endl;
    cout<<"SUB:"<<(a-b)<<endl;
    cout<<"MUL:"<<(a*b)<<endl;
    cout<<"DIV:"<<(a/b)<<endl;
    cout<<"REMINDER:"<<(a%b)<<endl;

    //Assingnment operator
    cout<<(a+=2)<<endl;
    cout<<(a -= 2)<<endl;
    cout<<(a*=2)<<endl;
    cout<<(a/=2)<<endl;
    cout<<(a%=2)<<endl;

   //Relational Operation
   cout<<(a==b)<<endl;
   cout<<(a<=b)<<endl;
   cout<<(a>=b)<<endl;
   cout<<(a!=b)<<endl;
   cout<<(a<b)<<endl;
   cout<<(a>b)<<endl;
   
   //logical operators

   int con1=(15>10); //true
   int con2=(5<10); //true

   cout<<(con1 && con2)<<endl;
   cout<<(con1 || con2)<<endl;
   cout<<(! con1)<<endl;

    return 0;
}