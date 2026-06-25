#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    priority_queue<int> temp = pq; //we use temp because if we do not use then changes will occur to main priority queue

    cout << temp.top() << endl; // 10
    temp.pop();                 // delete 10
    cout << temp.top() << endl; // now 20

    // for tansverse of priority
    while (!temp.empty())
    {
        cout << temp.top();
        temp.pop();
    }
    cout << endl;

    cout << pq.size(); 

    return 0;
}