#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string removeSpecialCharacters(string s){
    string s_treated = "";
    for(char c : s) {
        if(isalnum(c)) {
            s_treated.push_back(c);
        }
    }
    return s_treated;
}

string toLowerCase(string s) {
    for(char& c : s) {
        c = tolower(c);
    }
    return s;
}

class isPalindrome{
public:
    bool checkPalindrome(string s) {
        s = toLowerCase(removeSpecialCharacters(s));
        string s_reversed;

        for(int i = s.length() - 1; i >= 0; i--) {
            s_reversed.push_back(s.at(i));
        }
        if(s == s_reversed){
            return true;
        } else{
            return false;
        }
    }
};

class Solution{
public:
    bool validPalindrome(string s) {
        //cheks if the original string is a palindrome
        string s_reversed;
        for(int i = s.length() - 1; i >= 0; i--) {
            s_reversed.push_back(s.at(i));
        }
        if(s == s_reversed){
            return true;
        } else{ //if not a palindrome check if can become one by lobotomizing it  
            for(int i = 0; i < s.length(); i++) {
                string modified = s;
                string mod_reversed;
                cout << i << ": " << modified << endl;
                modified.erase(i, 1);
                cout << "after erasing: " << modified << endl;

                for(int i = modified.length() - 1; i >= 0; i--) {
                    mod_reversed.push_back(modified.at(i));
                }
                if(modified == mod_reversed) {
                    return true;
                }
            }
        }
        return false;
    }
};


int main() {

    string s = "ovo";
    string s2 = "eg,g";
    string s3 = "Ar a ra";
    string s4 = "~._#$ar,ar,a_$#_.~";

    string ss4 = "AaAaA123";

    isPalindrome solution;

    //cout << removeSpecialCharacters(s) << endl;
    //cout << removeSpecialCharacters(s2) << endl;
    //cout << removeSpecialCharacters(s3) << endl;
    //cout << removeSpecialCharacters(s3) << endl;

    //cout << toLowerCase(ss4) << endl;

    //cout << solution.checkPalindrome(s3) << endl;

    Solution solution2;

    cout << solution2.validPalindrome("abca");

    return 0;
}