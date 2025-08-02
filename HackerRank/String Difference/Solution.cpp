#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> getRemovableIndices(string str1, string str2) {
    vector<int> indices = {};
    for(int i = 0; i < str1.length(); i++) {
        string mod_str1 = str1;
        if(mod_str1.erase(i, 1) == str2) {
            indices.push_back(i);
        }
    }
    if(indices.empty()) return vector<int>{-1};
    return indices;
}

int main() {

    string str1 = "abdgggda";
    string str2 = "abdggda";

    vector<int> vals = getRemovableIndices(str1, str2);
    for(int val : vals) {
        cout << val << " "; 
    }
    

    return 0;
}