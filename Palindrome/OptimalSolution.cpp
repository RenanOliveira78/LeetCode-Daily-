#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool validPalindromeRemove1(string s, int right, int left) {

        for(; left < (s.length())/2; left++) {
            if(s.at(left) != s.at(right)) {
                return false;
            }
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int right = s.length() - 1;

        for(int left = 0; left < (s.length())/2; left++) {
            if(s.at(left) != s.at(right)) {
                //try wiht the removal of characters
                if(validPalindromeRemove1(s, right+1, left) || validPalindromeRemove1(s, right, left+1)){
                    return  true;
                }
                    return false;
            }
            right--;
        }
        return true;
    }
};

int main() {

    string s = "obvo";
    string s2 = "egg";
    string s3 = "arara";

    Solution solution;

    cout << solution.validPalindrome(s);

    return 0;
}