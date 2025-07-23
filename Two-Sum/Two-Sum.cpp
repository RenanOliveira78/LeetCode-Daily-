#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//The program sweeps through the vector, computing the sum for each number in it
class NaiveSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums.at(j) + nums.at(i) == target) {
                    return {i, j};
                }
            }    
        }
        return {};
    }
};

class OptimalSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums.at(i);
            //checks if the computed complement is in the lsit or not (rep´resented as the end of the lsit pointer)
            // here the map is built with vlaue formt he numbers vector (key) to index (value)
            if(seen.find(complement) != seen.end()) {
                return {seen.at(complement), i};
            }
            seen[nums.at(i)] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15, 8, 1};
    int target = 9;

    NaiveSolution solution;
    vector<int> result = solution.twoSum(nums, target);

    cout << "Result: [" << result.at(0) << ", " << result.at(1) << "]" << endl;

    OptimalSolution solution2;
    vector<int> result2 = solution2.twoSum(nums, target);

    cout << "Result: [" << result2.at(0) << ", " << result2.at(1) << "]";
}