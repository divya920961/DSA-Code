#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool possibleDay(vector<int> &bloomDay, int day, int m, int k)
    {
        int cnt = 0, bouquet = 0;

        for (int x : bloomDay)
        {
            if (x <= day)
            {
                cnt++;
            }
            else
            {
                bouquet += (cnt / k);
                cnt = 0;
            }
        }

        bouquet += (cnt / k);
        return bouquet >= m;
    }
};
int main()
{
    vector<int> bloomDay = {7, 7, 7, 7, 10,7, 12, 11, 7};
    int m = 2, k = 3;
    int n = bloomDay.size();

    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());

    if (1LL * m * k > n)
    {
        cout << -1;
        return 0;
    }
    Solution s;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (s.possibleDay(bloomDay, mid, m, k))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low;

    return 0;
}
