#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int high = n - 1;
        int low = 0;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[low] <= nums[mid])
            {
                if (target >= nums[low] && target <= nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if (target >= nums[mid] && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main()
{
    int target = 1;

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    Solution s1;
    cout <<"Index of target " << target <<" is "<<s1.search(nums, target);
    return 0;

}