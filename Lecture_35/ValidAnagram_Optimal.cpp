
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        int hash[26] = {0};

        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }

        for(int x : hash){
            if(x != 0){
                return false;
            }
        }

        return true;
    }
};

int main(){
    Solution s;

    string str1 = "anagram";
    string str2 = "nargaam";

  if(s.isAnagram(str1, str2)){
cout<<"It is an anagram";
  }else{
    cout<<"It is not anagram";

  }

    return 0;
}
