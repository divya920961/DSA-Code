#include <iostream>
using namespace std;

int main()
{
    // pair<int, int> p;
    // p.first = 10;
    // p.second = 30;
    // cout << p.first << endl;
    // cout << p.second << endl;

    // pair<int,string> p={28,"Divya"};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    // pair<int, pair<int, int>> p = {10, {20, 30}};

    // cout << p.first << endl;
    // cout << p.second.first << endl;
    // cout << p.second.second << endl;

    pair<pair<int, int>, pair<int, int>> p = {{1, 2}, {3, 3}};
    cout << p.first.first << endl;
    cout << p.first.second << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
    return 0;
}