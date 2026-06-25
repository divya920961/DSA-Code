#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m = {{101, "Anushree"}, {102, "Arya"}};
    m.emplace(104, "Divya");
    m.insert({103, "Chaitali"});

    m[102] = "disha";//here i manipulate  map
   

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    // cout<<m[103];
    

    cout << m.size() << endl; // size of map
    m.clear();
    cout << m.size() << endl;//coutn after deletion
    

    return 0;
}