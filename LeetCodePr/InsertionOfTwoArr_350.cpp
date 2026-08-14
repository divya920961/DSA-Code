#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] == nums2[j]) {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << "Intersection: ";

    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }

    return 0;
}