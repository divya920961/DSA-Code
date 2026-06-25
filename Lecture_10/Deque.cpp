#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.emplace_back(15);
    dq.push_back(20);
    dq.push_front(5);

    for(auto it: dq){
        cout<<it<< " ";
    }
    dq.pop_front();
  for(auto it: dq){
        cout<<it<< " ";
    }
    
    return 0;
}