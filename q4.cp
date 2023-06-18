#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();

    // Start from the rightmost digit and add one
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            // If the current digit is less than 9, simply increment it and return the updated digits
            digits[i]++;
            return digits;
        } else {
            // If the current digit is 9, set it to 0 and continue to the next digit
            digits[i] = 0;
        }
    }

    // If all digits are 9, we need to add an additional digit 1 at the front
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};

    std::vector<int> result = plusOne(digits);

    std::cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i < result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}