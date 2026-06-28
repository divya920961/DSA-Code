#include <iostream>
using namespace std;

int main()
{
    int num=0,rev=0;
    cout<<"Enter the number :";
    cin>>num;
    int orignal=num;
    while(num>0){

        
        int  last=num%10; //to get last number
        rev=rev*10+last; //to get reverse
        num/=10;
        
    }
   
   if(rev==orignal){
    cout<<"It is palindrome";

   }else{
    cout<<"Not palindrome";
   }
    

    return 0;
}
