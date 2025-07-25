#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool validPalindromeRemove1(string s, int right, int left) {
        cout << s << endl;
        cout << "right: " << right << endl;
        cout << "left: " << left << endl;

        for(; left < right; left++) {
            cout << s.at(left) << " : " << s.at(right) << endl;
            if(s.at(left) != s.at(right)) {
                return false;
            }
            right--;
        }
        cout << s.at(left) << " : " << s.at(right) << endl;
        return true;
    }

    bool validPalindrome(string s) {

        int right = s.length() - 1;

        for(int left = 0; left < (s.length())/2; left++) {
            if(s.at(left) != s.at(right)) {
                //try wiht the removal of characters
                if(validPalindromeRemove1(s, right-1, left) || validPalindromeRemove1(s, right, left+1)){
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

    cout << solution.validPalindrome("abc");

    return 0;
}