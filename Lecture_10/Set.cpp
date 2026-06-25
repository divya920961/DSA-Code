#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(40);
    s.insert(41);
    s.insert(44);
    s.insert(42);
    s.insert(46);

    // transverse of set
    //  for(auto it :s){
    //      cout<<it<<" ";
    //  }
    // cout << endl;

    // find function

    // int n=0;
    // cout<<"Enter Number: ";
    // cin>>n;
    // auto it=s.find(n); //it is an itetrator

    // if(it != s.end()){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    // }

    // erase
    //  s.erase(s.begin());
    // s.erase(41);
    cout<<s.max_size();
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}