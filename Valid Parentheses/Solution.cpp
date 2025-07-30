#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;

        for(char c : s) {
            //cout << "c is: "<< c << endl;
            if(c == '(' || c == '[' || c == '{' ) parentheses.push(c);
            else{
                if(parentheses.empty()) return false;
                //cout << parentheses.top() << endl;
                //cout << "enter here" << endl;
                if(
                parentheses.top() == '(' && c == ')' ||
                parentheses.top() == '[' && c == ']' ||
                parentheses.top() == '{' && c == '}'){
                    parentheses.pop();
                } else {
                    return false;
                }
            }
        }
        return parentheses.empty();
    }
};

int main() {

    string s = "())))";

    Solution solution;
    bool check = solution.isValid(s);
    cout << check << endl;
    if(check) cout << s << " is a valid parentheses configuration.";
    else cout << s << " is not a valid configuration."; 

    return 0;
}