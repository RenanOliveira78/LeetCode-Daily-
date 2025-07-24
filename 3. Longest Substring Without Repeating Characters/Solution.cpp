#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

//create a moving window

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        vector<char> set;

        for(int i = 0; i < s.length(); i++) {
            
        }


        return ;
    }
};


int main() {
    string s = "abbcd";

    Solution solution;
    int result = solution.lengthOfLongestSubstring(s);

    cout << result;

    return 0;
}