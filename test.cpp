#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <map>
#include <algorithm>

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
 
    vector<string> words = {"banana", "apple", "orange", "grape"};

    sort(words.begin(), words.end());  // Sorts alphabetically (lexicographically)

    for (const string& word : words) {
        cout << word << " ";
    }

    cout << endl;

    for(int i = 1; i != 5;i++) {
        cout << i << " ";
    }
    
    cout << endl;
    string z = "abacate"; 

    cout << z.substr(0, 3);

    return 0;
}