#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> getRemovableIndices(string str1, string str2) {

    //input validation
    if (str1.empty() || str2.empty() || str1.length() != str2.length() + 1) {
        return {-1};
    }

    //First missmatch
    int fstMiss = 0;
    while(fstMiss < str2.length() && str1.at(fstMiss) == str2.at(fstMiss)) {
        fstMiss++;
    }

    string tempString = str1.substr(0, fstMiss) + str1.substr(fstMiss + 1);
    if(tempString != str2) {
        return {-1};
    }

    char charFstMiss = str1.at(fstMiss);
    vector<int> result;
    result.push_back(fstMiss);

    int left = fstMiss - 1;
    int right = fstMiss + 1;

    while(left >= 0 && str1.at(left) == charFstMiss || (right < str1.length() && str1.at(right) == charFstMiss)) {

        if(left >= 0 && str1.at(left) == charFstMiss) {
            result.insert(result.begin(), left);
            left--;
        }

        if(right < 0 && str1.at(right) == charFstMiss) {
            result.insert(result.begin(), right);
            right++;
        }

    }

    return result;

}

int main() {

    string str1 = "aaabb";
    string str2 = "aabb";

    vector<int> vals = getRemovableIndices(str1, str2);
    for(int val : vals) {
        cout << val << " "; 
    }
    

    return 0;
}