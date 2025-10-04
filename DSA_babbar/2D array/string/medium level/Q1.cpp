// try question 1 (sel)
//647. Palindromic Substrings (LeetCode Medium)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Expand around the given center (left, right) and count palindromes
    int expandFromCenter(const string& s, int left, int right) {
        int count = 0;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            count++;   // found a palindrome
            left--;    // expand left
            right++;   // expand right
        }
        return count;
    }

    // Count all palindromic substrings in the string
    int countSubstrings(string s) {
        int n = s.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            total += expandFromCenter(s, i, i);     // odd length palindromes
            total += expandFromCenter(s, i, i + 1); // even length palindromes
        }
        return total;
    }
};

int main() {
    Solution obj;

    string s = "abae";   // Example string (different from "aaa")
    cout << "Input string: " << s << endl;

    int result = obj.countSubstrings(s);
    cout << "Total Palindromic Substrings: " << result << endl;

    return 0;
}
