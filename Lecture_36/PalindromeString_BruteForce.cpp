#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {

        string cleaned = "";

        for (char ch : s)
        {
            if (isalnum(ch))
            {
                cleaned += tolower(ch);
            }
        }

        string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());

        return reversed == cleaned;
    }
};
int main()
{
    Solution s1;

    string s = "Maa$%m";
    cout << s1.isPalindrome(s);
    return 0;
}