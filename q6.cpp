#include <iostream>
#include <vector>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> numSet;

    for (int num : nums) {
        // If the number is already in the set, it is a duplicate
        if (numSet.count(num) > 0) {
            return true;
        }
        
        numSet.insert(num);
    }

    return false;
}
int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};  // Example array

    bool result = containsDuplicate(nums);

    // Print the result
    if (result) {
        std::cout << "The array have duplicates." << std::endl;
    } else {
        std::cout << "The array do not have duplicates." << std::endl;
    }

    return 0;
}