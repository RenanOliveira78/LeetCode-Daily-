#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void toLowerString(string &s) {
    for(char &c : s) {
        c = tolower(c);
    }
}

void plusMinus(vector<int> arr) {
    float pos = 0;
    float neg = 0;
    float zer = 0;
    
    for(int num : arr) {
        if(num > 0){
            pos++;
        }
        else if(num == 0){
            zer++;
        } 
        else{
            neg ++;
        }
    }
    
    cout << fixed << setprecision(6) << pos/arr.size() << endl << neg/arr.size() << endl << zer/arr.size();
    
}

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

    cout << z.substr(0, 3) << endl;

    string u = "EWIOUYnc";
    toLowerString(u);

    cout << u << endl;

    int n1 = 25;
    int n2 = 9;

    if(n1%5) cout << "yes";


    vector<int> arr = {1, 2, 3};
    vector<vector<int>> operations = {{1, 2}};

    for(vector<int> operation : operations) {
        swap(arr.at(operation.at(0)), arr.at(operation.at(1)));
    }

    for(int i : arr) {
        cout << i << " ";
    }
    


    plusMinus({1,2,3,0});

    cout << endl << endl;

    string s1 = "0";
    cout << s1.empty();

    return 0;
}