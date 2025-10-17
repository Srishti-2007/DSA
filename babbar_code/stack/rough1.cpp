#include <string>
#include <vector>
#include <iostream>

class Solution {
 public:
    /**
     * @brief Removes all characters from str1 that are present in str2.
     * * @param str1 The string from which characters will be removed.
     * @param str2 The string containing the characters to remove.
     * @return The resulting string after removal.
     */
    std::string removeChars(std::string str1, std::string str2) {
        // Step 1: Create a boolean array (or hash set) to mark characters present in str2.
        // Since we are dealing with only 26 lowercase English letters, a fixed array is most efficient.
        bool chars_to_remove[26] = {false};
        
        // Step 2: Populate the lookup table.
        // Iterate through str2 and mark each character as 'true' in the array.
        for (char c : str2) {
            // 'c - 'a'' gives the index (0 for 'a', 1 for 'b', etc.).
            chars_to_remove[c - 'a'] = true;
        }
        
        // Step 3: Build the result string.
        std::string result = "";
        
        // Step 4: Iterate through str1.
        for (char c : str1) {
            // Step 5: Check if the character is NOT marked for removal.
            if (!chars_to_remove[c - 'a']) {
                // Step 6: If it should be kept, append it to the result.
                result.push_back(c);
            }
        }
        
        // Step 7: Return the final filtered string.
        return result;
    }
};

// You would typically not include the main function in a LeetCode submission, 
// but it's included here for local testing purposes.
int main() {
    Solution sol;
    
    // Example 1: Input: str1 = "computer", str2= "cat" -> Output: "ompuer"
    std::string result1 = sol.removeChars("computer", "cat");
    std::cout << "Test 1: " << result1 << std::endl; // Expected: ompuer

    // Example 2: Input: str1 = "occurrence", str2 = "car" -> Output: "ouene"
    std::string result2 = sol.removeChars("occurrence", "car");
    std::cout << "Test 2: " << result2 << std::endl; // Expected: ouene

    // Example 3: str2 is empty
    std::string result3 = sol.removeChars("hello", "");
    std::cout << "Test 3: " << result3 << std::endl; // Expected: hello

    // Example 4: str1 has no common characters
    std::string result4 = sol.removeChars("xylophone", "abcd");
    std::cout << "Test 4: " << result4 << std::endl; // Expected: xylophone
    
    return 0;
}

