#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int, string> um = {{101, "Anu"}, {102, "Arya"}};
    um.insert({106, "Divya"});
    um.insert({103, "chiu"});
    um.emplace(104, "chaitali");

    for (auto it : um)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << um.size() << endl; // size before clearing
    um.clear();
    cout << um.size()<<endl; // size after clearing
    um.erase(103);
   cout << um.size(); 

    return 0;
}