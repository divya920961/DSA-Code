#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str ="aabcASDFJDS";
    map<char,int>hashmap;

    for(int i=0; i<str.size();i++){
        hashmap[str[i]]++;

    }

    for(auto it:hashmap){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}