#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());

    cout << "Merged array: ";

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}