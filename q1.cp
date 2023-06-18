#include <iostream>
#include <vector>
#include <set>
#include<algorithm>
using namespace std;
vector<int> twoSum(const vector<int>& nums, int target) {
    set<int> numSet;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // Check if the complement exists in the set
        if (numSet.count(complement) > 0) {
            // Find the index of the complement
            auto it = find(nums.begin(), nums.end(), complement);
            int complementIndex = distance(nums.begin(), it);

            // Return the indices of the two numbers
            return {complementIndex, i};
        }

        // Add the current number to the set
        numSet.insert(nums[i]);
    }

    // If no solution is found, return an empty vector
    return {};
}

int main() {
    std::vector<int> nums = {3,1,4,2};
    int target = 6;

    std::vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << "Output: [" << result[0] << ", " << result[1] << "]" << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}