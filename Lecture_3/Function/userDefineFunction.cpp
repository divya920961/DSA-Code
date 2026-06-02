#include <iostream>
using namespace std;

void greet(string name){
    cout<<"Good Afternoon "<<name<<endl;
}
int fun1(int a){
    return a;
}




int main()
{
    cout<<fun1(30)<<endl;
    greet("Divya");
    return 0;
}