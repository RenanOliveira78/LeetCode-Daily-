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
    cout << removeSpecialCharacters(s3) << endl;

    //cout << toLowerCase(ss4) << endl;


    cout << solution.checkPalindrome(s3) << endl;



    return 0;
}