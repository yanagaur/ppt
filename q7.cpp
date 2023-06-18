#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int n = nums.size();
    int writeIndex = 0; // Index to write non-zero elements

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        // If the current element is non-zero
        if (nums[i] != 0) {
            // Write the non-zero element to the writeIndex position
            nums[writeIndex] = nums[i];
            writeIndex++;
        }
    }

    // Fill the remaining positions from writeIndex to the end with zeros
    while (writeIndex < n) {
        nums[writeIndex] = 0;
        writeIndex++;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};  // Example array

    moveZeroes(nums);

    // Print the modified array
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
