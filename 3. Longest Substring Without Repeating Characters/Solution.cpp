#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
        int lengthOfLongestSubstring(string s) {
            vector<string> subsets;
            unordered_map<char, int> seen;
            string subset = "";

            for(int i = 0; i < s.length(); i++) {
                //if the character was seen before in the hash map, clean subset string and start again
                if(seen.find(s.at(i)) != seen.end()) {
                    seen.clear();
                    subsets.push_back(subset);
                    subset = "";
                }
                subset += s.at(i);
                seen[s.at(i)] = i;
            }

            string longest = "";
            for(const string subset : subsets) {
                if(subset.length() > longest.length()) {
                    longest = subset;
                }
            }

            for(string found : subsets) {
                cout << ", " << found;
            }
            cout << endl; 
            return longest.length();
        }
};

int main() {
    string s = "pwkkkabcd";

    Solution solution;
    int result = solution.lengthOfLongestSubstring(s);

    cout << result;

    return 0;
}