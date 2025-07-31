#include <iostream>
#include <string>

using namespace std;

//. Any chacter 
// Ex a.c -> matches "a(any char)c"

// ^ Start of the string
// Ex ^a starts with a

// $ End of the string
// Ex ^s if the string ends wiht s

// * 0 or more of the previous char
// Ex *a macthes "aaa", "", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa"

// + 1 or mroe of the previous item
// same as * but not empty

// ? 0 or 1 of the previosu item
// a? -> "a" or ""

// [] match one chacter in the set
// [abc] -> "a", "b", "c"

// [^] macth one chacter not in set
// [^a] -> "b" , "c" , "s"

// \d matches digits
// same as [0-9]

// \w woprd chavcater letters digits underscores

// \s whitespace tab newline space

// \b word boundarty
// \bthe\b mactghes "the" but not "other"

// qunatifies {}
// a{3} mactehs 3 a's a{2,3} macthe sbwtrenn 2 and 3 a'ds a{2,} at lewast 2 as

// (ab) grousp ab together

// \1 refers to the first group macthjes earlier



int main() {

    string s = "abcs";



    return 0;
}