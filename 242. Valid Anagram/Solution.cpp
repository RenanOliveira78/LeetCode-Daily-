#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution{
public:
    bool isAnagram(string s, string t) {
        //returns 0 if the size is different
        if(s.length() != t.length()) return false;
        unordered_map<char, int> map;
        
        // maps out wiht the counts as values
        for(char c : s){
            if(map.find(c) != map.end()) {
                map[c]++;
            } else map[c] = 1;
        }

        for(char c: t) {
            if(map.find(c) == map.end()) {
                return false;
            }

            if(map.find(c) != map.end()) {
                map[c]--;
            }
        }

        for(auto c : map) {
            if(c.second != 0){return false;}
        }
        return true;
    }
};


int main() {
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";

    string t = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba";

    Solution solution;
    bool result = solution.isAnagram(s, t);

    if(result) cout << s << " and " << t << " are anagrams.";
    else cout << s << " and " << t << " are not anagrams.";
    return 0;
}