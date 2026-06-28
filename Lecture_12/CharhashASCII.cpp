#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdbaABCADdddbbca";
    vector<int> hash(123, 0);

    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;
    }
    cout << hash['A'] << endl;
    cout << hash['d'] << endl;

    return 0;
}