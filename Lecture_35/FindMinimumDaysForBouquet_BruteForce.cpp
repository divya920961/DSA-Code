
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
    vector<int> bloomDay = {7, 7, 7, 7, 13, 12, 11, 7};
    int m = 2, k = 3;
    int n = bloomDay.size();

    int mini = *min_element(bloomDay.begin(), bloomDay.end());
    int maxi = *max_element(bloomDay.begin(), bloomDay.end());

    Solution s;
    int ans = -1;

    if (1LL * m * k > n)
    {
        cout << -1;
        return 0;
    }

    for (int day = mini; day <= maxi; day++)
    {
        if (s.possibleDay(bloomDay, day, m, k))
        {
            ans = day;
            break;
        }
    }

    cout << ans;
    return 0;
}
