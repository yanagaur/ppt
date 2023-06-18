#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    int n = nums.size();
    int total_sum = n * (n + 1) / 2;
    int sum_of_nums = 0;
    std::unordered_set<int> num_set;

    int duplicate_num = -1;
    for (int num : nums) {
        if (num_set.count(num) > 0) {
            duplicate_num = num;
        } else {
            num_set.insert(num);
            sum_of_nums += num;
        }
    }

    int missing_num = total_sum - sum_of_nums;

    return {duplicate_num, missing_num};
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4};  // Example array

    std::vector<int> result = findErrorNums(nums);

    // Print the result
    std::cout << "Duplicate Number: " << result[0] << std::endl;
    std::cout << "Missing Number: " << result[1] << std::endl;

    return 0;
}
