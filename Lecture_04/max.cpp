#include <iostream>
using namespace std;

int main()
{
    // int num[4]={1,2,9,4};
    // int a=num[0];
    // int b=num[1];
    // int c=num[2];
    // int d=num[3];

    // if(a>b && a>c && a>d){
    //     cout<<a<<"is greater";
    // }else if(b>c && b>d){
    //       cout<<b<<"is greater";
    // }else if(c>d){
    //       cout<<c<<" is greater";
    // }else{
    //       cout<<d<<"is greater";
    // }

    //by using for loop
    int max=0;
    int arr[4]={1,8,3,5};
    for (int i=0;i<=3;i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<< " is greater";
    

    return 0;
}