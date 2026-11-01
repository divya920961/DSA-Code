#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            if (!isalnum(s[left]))
            {
                left++;
            }
            else if (!isalnum(s[right]))
            {
                right--;
            }
            else
            {
                if (tolower(s[left]) != tolower(s[right]))
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};
int main()
{
    Solution s1;

    string s = "MA#$M";
    cout << s1.isPalindrome(s);
    return 0;
}