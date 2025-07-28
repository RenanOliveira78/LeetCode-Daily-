#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:

    vector<pair<string, int>> Romans = {
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
        {"I", 1},
    };

    string intToRoman(int num) {

        string romanNumber;

        for(auto Roman : Romans) {
            if(num == 0) break;
            while(num >= Roman.second) {
                romanNumber += Roman.first;
                num -= Roman.second;
            }
        }
        return romanNumber;
    }

};

int main() {

    Solution solution;

    int number = 579;

    string roman_number = solution.intToRoman(number);

    cout << roman_number;

    return 0;
}