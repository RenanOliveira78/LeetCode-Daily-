#include <bits/stdc++.h>

using namespace std;


/*
 * Write the regular expression in the blank space below
 */
 
regex regularExpression("^(.)(.*)?\\1$");

int main()
{
    int query;
    cin >> query;
    
    vector<string> result(query, "False");
    for (int i = 0; i < query; i++) {
        string someString;
        cin >> someString;
        
        if (someString.length() == 1 || regex_match(someString, regularExpression)) {
            result[i] = "True";
        }
    }
    
    ofstream fileOut(getenv("OUTPUT_PATH"));
    for (string res: result) {
        fileOut << res << endl;
    }
    
    return 0;
}