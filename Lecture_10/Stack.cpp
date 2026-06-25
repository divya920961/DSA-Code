#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1, st2;
    st1.push(10);
    st1.push(20);
    st2.push(30);
    st2.push(40);

    cout << "stack value before swap : " << st1.top() << " " << st2.top() << endl;
    st1.swap(st2);
    cout << "stack value after swap : " << st1.top() << " " << st2.top();
    return 0;
}