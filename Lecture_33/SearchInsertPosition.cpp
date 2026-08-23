
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;  //if the target is not in the array then here we return the index where it is possible to be 
    }
};

int main()
{
    Solution s;

    // vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> v = {10, 20, 40, 50};
    int target = 30;
    cout << s.searchInsert(v, target);
}