#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<pair<string, int>> Roman = {
        {"M", 1000},
        {"CM", 900},
        {"D", 500},
        {"CD", 400},
        {"C", 100},
        {"XC", 90},
        {"L", 50},
        {"XL", 40},
        {"X", 10},
        {"IX", 9},
        {"V", 5},
        {"IV", 4},
        {"I", 1}
    };

    int romanToInt(string s) {
        int number = 0;

        while(!s.empty()) {
            for(auto roman : Roman) {
                //if the roman string is the same as the first roman character ofi the size of that roman character
                if(s.substr(0, roman.first.size()) == roman.first){
                    //add to the numebr the numeric equivalent of that roman string
                    number += roman.second;
                    //get the substring, removing the roman substring added to the number
                    s = s.substr(roman.first.size());
                    break;
                }
            }
        }
        return number;
    }

};


int main() {

    string romanNumber = "IV";

    Solution solution;

    int number = solution.romanToInt(romanNumber);
    
    cout << romanNumber << " converts to " << number << endl;

    return 0;
}