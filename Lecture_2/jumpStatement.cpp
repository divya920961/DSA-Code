#include <iostream>
using namespace std;

int main()
{
    //contiunue jumpstatement 
      cout<<"continue - jump statement"<<endl;
    for(int i=1;i<=5;i++)
    {
        if(i==3)
        {
            continue;
        }
      
        cout<<i<<endl;

    }

    //break jump statement
    cout<<"break - jump statement"<<endl;
    for(int j=1;j<=10;j++)
    {
        cout<<j<<endl;
        if(j==3){
            break;
        }
       
        
    }
    return 0;
}