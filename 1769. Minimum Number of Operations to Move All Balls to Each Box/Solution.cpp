#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> moves(boxes.size());
        for(int i = 0; i < boxes.size(); i++) {
            for(int j = 0; j < boxes.size(); j++) {
                if(j != i && boxes[j] == '1') {
                    // calculate the number of moves to move the stuff, if any, from box j to i
                    // the amount of steps to move a ball sequentially is the geometric distance
                    moves[i] +=  abs(i - j);
                }
            }
        }
        return moves;
    }    
};

class OptimalSolution {
public:
    vector<int> minOperations(string boxes) {
        
    }
};

int main() {
    string boxes = "110";
    Solution solution;

    vector<int> result = solution.minOperations(boxes);
    
    for(int operations : result) {
        cout << operations;
    }
    

    return 0;
}
