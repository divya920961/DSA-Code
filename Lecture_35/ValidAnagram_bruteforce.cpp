#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string str1 = "silent";
    string str2 = "listen";

    if (str1.size() != str2.size())
    {
        cout << "Not an anagram";
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
    {
        cout << "It is valid Anagram";
    }
    return 0;
}