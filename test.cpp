#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"1", "2", "3"," wor4"};

    for(string word : words) {
        cout << word;
    }

    return 0;
}