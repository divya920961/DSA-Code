#include <iostream>
using namespace std;

int main()
{
    int num,original,a=0;
    cout<<"Enter the number :";
    cin>>num;
    original=num;
    while(num>0){

        int  last=num%10;
        a=a+(last*last*last);
        num/=10;
        
    }
    if(original==a){
        cout<<"It is an Armstrong number";
    }else{
        cout<<"It is not an Armstrong number";
    }
  
    

    return 0;
}
