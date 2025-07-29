#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <map>

using namespace std;

int main() {
    string word = "bicycle";

    cout << word << endl;
    
    unordered_map <char, int> Umap;
    map <char, int> Omap;

    for(int i = 0; i < word.length(); i++) {
        Umap[word.at(i)] = i;
    }

    for(int i = 0; i < word.length(); i++) {
        Omap[word.at(i)] = i;
    }

    cout << Umap['b'] << " " << Omap[2] << endl;

    string substring = word.substr(2, 1);
    cout << substring << endl;

    int num = 3478;

    cout << num/10 << " " << num%10 << endl;

    string test = "IV";
    string test2 = "IVXL";

    cout << test2.substr(0) << endl;

    cout << test2.substr(3, 4) << endl;

    return 0;
}