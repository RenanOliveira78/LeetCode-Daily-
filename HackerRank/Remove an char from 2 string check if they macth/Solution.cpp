#include <iostream>
#include <string>

using namespace std;

// make a function that recieves a 2 string, one is bigger than teh other exactly 1 char , thats str1
// check if, by remvoing one char from str1, you can make str1 be the same as str2


// keep track of the current elelment being compared
// [1, 2, 3, 4, 5, 6, 7] = str1
//  v  v  v 
// [1, 2, 4, 5, 6, 7] = str2

//the 2nd element of str1 isnt the same as str2
//try skipping it to see if the rest is equal
// if not return false

//think about toher cases such as
// [1, 2, 3, 4, 8]
// [1, 2, 3, 4]

bool checkString(string str1, string str2) {
    int skipper = 0; // you can skip one time max
    int i = 0;
    while(skipper < 1 && i < str2.length()) {
        if(str1.at(i+skipper) != str2.at(i)) {
            skipper++;
        } else{
            i++;
        }
    }

    if(skipper > 1) return false;
    else return true;

}

int main() {

    //string str1 = "12345";
    //string str2 = "1234";

    string str1 = "11345";
    string str2 = "1345";

    cout << checkString(str1, str2);

    
    return 0;
}