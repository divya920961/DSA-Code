#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={-1,1,2,-2,-2,-3,-4,3,4,-4,-5,-6,1,1,1};
    map<int,int>mpp;
    for(int i=0; i<arr.size(); i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    
    return 0;
}