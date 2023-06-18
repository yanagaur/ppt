#include <iostream>
#include <vector>
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1;  // Index of last element in nums1
    int j = n - 1;  // Index of last element in nums2
    int k = m + n - 1;  // Index of last position in merged array (nums1)

    // Merge the arrays from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // Copy remaining elements from nums2 to nums1 if any
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
int main() {
    std::vector<int> nums1 = {1, 3, 5, 0, 0, 0};  // Example nums1 array with space for merging
    int m = 3;  // Number of elements in nums1

    std::vector<int> nums2 = {2, 4, 6};  // Example nums2 array
    int n = 3;  // Number of elements in nums2

    merge(nums1, m, nums2, n);

    // Print the merged and sorted array (nums1)
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}