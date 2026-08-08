#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        for (int i = 1; i <= nums.size(); i++) {
            bool found = false;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }

            if (!found)
                ans.push_back(i);
        }

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> ans = s.findDisappearedNumbers(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}