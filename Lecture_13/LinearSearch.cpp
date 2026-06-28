#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                return i;
            }
           
        } return -1;
        
    }
   
};

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8};
    int x=8;
    Solution s1;
    cout<<s1.search(arr, x);
   

    
    return 0;
}