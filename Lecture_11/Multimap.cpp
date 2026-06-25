#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> m = {{101, "Anushree"}, {102, "Arya"}};
    m.emplace(104, "Dikshita");
    m.emplace(104, "Divya");
    m.insert({103, "Chaitali"});

    for(auto it: m){
        cout<<it.first<< " "<<it.second;
    }
    cout<<endl;

   // cout<<m[102]; //Random access not possible due to more than one key

   cout<<m.size();
   auto it =m.begin();

    return 0;
}