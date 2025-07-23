#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indexes;
        for(int i = 0; i < words.size(); i++) {
            for(const char& letter : words[i]) {
                if(letter == x) {
                    indexes.push_back(i);
                    break;
                }
            }
        }
        return indexes;
    }
};

int main() {

    vector<string> words = {"gamer", "speed", "litterate", "sleepy"};
    char x = 'r';
    Solution solution;
    vector<int> result = solution.findWordsContaining(words, x);

    for(int i = 0; i < result.size(); i++) {
        cout << result.at(i);
    }

    return 0;
}