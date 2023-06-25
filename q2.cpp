#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> char_count;
    
    // Count the frequency of each character
    for (char c : s) {
        char_count[c]++;
    }
    
    // Find the first unique character
    for (int i = 0; i < s.length(); i++) {
        if (char_count[s[i]] == 1) {
            return i;
        }
    }
    
    // If no unique character found
    return -1;
}

int main() {
    cout << firstUniqChar("leetcode") << endl;         // Output: 0
    cout << firstUniqChar("loveleetcode") << endl;     // Output: 2
    cout << firstUniqChar("aabb") << endl;             // Output: -1
    
    return 0;
}