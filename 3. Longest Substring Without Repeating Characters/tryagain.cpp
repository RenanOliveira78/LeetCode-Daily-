#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        set<char> seen;
        int size = 0;
        
        for(int right = 0; right < s.length(); right++) {
            cout << right << endl;

            string substring = s.substr(left, right - left + 1);
            cout << "substring:" << substring << endl;

            while(seen.count(s.at(right))) {
                //while the presence of the duplicate is there, move left along until it inst anymore
                seen.erase(s.at(left));
                left++;
                cout << "left:" << left;
            }
            cout << endl;
        
            seen.insert(s.at(right));
        
            size = max(size, right - left + 1);
        }

        return size;

    }

};

//string substring = word.substr(2, 3);

int main() {
    string s = "pwkkkabcd";

    Solution solution;
    int result = solution.lengthOfLongestSubstring(s);

    cout << result << endl;

    return 0;
}