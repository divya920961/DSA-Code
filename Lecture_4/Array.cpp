#include <iostream>
using namespace std;

int main()
{
    int array[4]={1,2,3,4};
    int a=0;
// cout<<array[0];
for(int i=0; i<=3 ;i++)
{
    a+= array[i];
}
    cout<<a;


    return 0;
}