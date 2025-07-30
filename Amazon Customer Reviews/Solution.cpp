#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Result{
public:

    //method/function that recieves a query and a repository of keywords
    //will return the list of suggestions (also a list but of keywords)
    //limitations:
    //the keywords must be returned in alphabetical order,
    //max of 3 keywords per sugestion,
    //only start suggesting after 2 char input]
    //lower case
    //return empty array case not possible to output (no suggestion)

    vector<vector<string>> searchSuggestions(vector<string> repository, string customerQuery) {
        //sorts repository keywords
        sort(repository.begin(), repository.end());

        vector<vector<string>> suggestions;
        //starts reading customer input
        //starting by the 2nd char
        for(int i = 1; i != customerQuery.length(); i++){
            vector<string> suggestion;
            for(string keyword : repository) {
                cout << customerQuery.substr(0, i+1) << endl;
                if(customerQuery.substr(0, i+1) == keyword.substr(0, i+1)) {
                    suggestion.push_back(keyword);
                }
                if(suggestion.size() == 3) break;
            }
            suggestions.push_back(suggestion);
        }
        return suggestions;
    }

};

int main() {

    // string word1 = "mouse";
    // string word2 = "air";

    // if(word1 < word2) cout << word1;
    // else cout << word2;

    Result result;
    
    vector<string> repository = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    string customerQuery = "mouse";

    vector<vector<string>> suggestions = result.searchSuggestions(repository, customerQuery);

    for(vector<string> suggestion : suggestions) {
        for(string keyword : suggestion){
            cout << keyword << " ";
        }
        cout << endl;
    }

    return 0;
}