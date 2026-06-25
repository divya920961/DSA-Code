#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //for vector
    // For acending ordered

    // vector<int> v{1,8, 3, 5, 4, 6, 7, 2, 10, 9};
    // sort(v.begin(), v.end());
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // For decending ordered
    // vector<int> v{1,8, 3, 5, 4, 6, 7, 2, 10, 9};
    // sort(v.begin(), v.end(), greater<int>()); // inside the sort we need to add paranthesis for greater<int>
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }


    //for array
    //for Acending ordered
    int arr[10]={1,8, 3, 5, 4, 6, 7, 2, 10, 9};
    sort(arr, arr+6);
    for(int i=0;i<10;i++){
        cout<<arr[i];

    }
    cout<<endl;

    //for Decending order
    int arr[10]={1,8, 3, 5, 4, 6, 7, 2, 10, 9};
    sort(arr, arr+6, greater<int>());
    for(int i=0;i<10;i++){
        cout<<arr[i];

    }
    return 0;
}