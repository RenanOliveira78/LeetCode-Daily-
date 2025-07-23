#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
    int score = 0;
    int scoreOfString(string s) {
        for(int i = 0; i < s.size() - 1; i++) {
            //cout << s[i] << " " << s[i+1];
            score += abs(s[i] - s[i+1]);
            //cout << endl;
        }
        return score;
    }    
};

int main() {
    string s = "hello";
    Solution solution;

    int result = solution.scoreOfString(s);
    cout << result;

    return 0;
}