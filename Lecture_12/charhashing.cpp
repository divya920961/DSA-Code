#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    //for lower case
    // string str="abcdbacbdddbbca";
    // vector<int>hash(26,0);

    // for(int i=0; i<str.size();i++){
    //     hash[str[i]-'a']++;

    // }
    // cout<<hash['b'-'a']<<endl;
    // cout<<hash['d'-'a']<<endl;


// int bb='z';
// cout<<bb;


    //upper case
     string str="ABABABBCCADDD";
    vector<int>hash(26,0);

    for(int i=0; i<str.size();i++){
        hash[str[i]-'A']++;

    }
    cout<<hash['B'-'A']<<endl;
    cout<<hash['D'-'A']<<endl;

    

    return 0;
}