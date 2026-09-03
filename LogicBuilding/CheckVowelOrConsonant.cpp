#include <iostream>
using namespace std;

int main()
{
    char a=0;
    cout<<"Enter character :";
    cin>>a;

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        cout<<"Its vowel";

    }else{
        cout<<"Its Consonant";
    }
    return 0;
}