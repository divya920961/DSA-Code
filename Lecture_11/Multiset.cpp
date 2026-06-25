#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(40);
    ms.insert(41);
    ms.insert(44);
    ms.insert(42);
    ms.insert(46);
    ms.insert(46);
    ms.insert(46);

   cout<<"count of 41 : " << ms.count(41)<<endl;

    ms.erase(ms.begin());
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    ms.erase(46); //it will delete all the occurences
   cout<<ms.count(46)<<endl;

    // to delete only one occurrence
    auto it = ms.find(46);
    ms.erase(it);
    cout <<"count of 46 after deletion : "<< ms.count(46);

    return 0;
}