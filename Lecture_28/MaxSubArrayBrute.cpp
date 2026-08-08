#include <iostream>
#include<vector>
#include<

using namespace std;
int MaxSubArray(vector<int>&nums){
int n=nums.size();
int max=INT_MIN;

for(int start=0;start<n;start++){
    for (int end=start;end<n;end++){
        int sum=0;

        for(int k=start ;k<+end;k++){
            sum+=nums[k];
            if(sum>max){
                max=sum;

            }

        }
    }
   

}
 return max;

}


int main()
{
    vector<int>nums={10,20,30,40};
    cout<<MaxSubArray(nums);

    
    return 0;
}