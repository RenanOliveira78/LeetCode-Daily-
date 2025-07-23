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

    cout << Umap['b'] << " " << Omap[2];

    
    return 0;
}