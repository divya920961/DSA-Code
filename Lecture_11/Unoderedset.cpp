#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> us; //us means unordered list which store elements in unodered form
    us.insert(40);
    us.insert(41);
    us.insert(44);
    us.insert(42);
    us.insert(46);
    us.insert(46);
    us.insert(46);

    for( auto it : us){
        cout<<it<<" ";
    }
    cout<<endl;

    auto it =us.find(41);
    if(it != us.end()){
        cout<<"found";
    }else{
        cout<<"Not found";
    }
    
    return 0;
}