#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> list;
    list.push_back(1);
    list.emplace_back(2);
    list.push_back(3);
    list.emplace_back(4);
    list.push_front(10);
    list.push_front(10);
    list.push_front(10);

    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // list.remove(10);
    // list.erase(list.begin(),2);
    for (auto it : list)
    {
        cout << it << " ";
    }

    return 0;
}