#include <bits/stdc++.h>
using namespace std;
// q “Given a string s, return true if the string can be palindrome after deleting at most one character from it.”
// Helper function: Check if substring s[i..j] is palindrome
bool checkPalindrome(string s, int i, int j) {
    while (i <= j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

// Main function: Check if string can be palindrome after at most 1 deletion
bool validPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            // either skip s[i] OR skip s[j]
            return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
        } else {
            i++;
            j--;
        }
    }
    return true;
}

// Driver code (main function)
int main() {
    // Example inputs
    string s1 = "aba";
    string s2 = "abca";

    cout << "Input: " << s1 << " -> Output: " 
         << (validPalindrome(s1) ? "true" : "false") << endl;

    cout << "Input: " << s2 << " -> Output: " 
         << (validPalindrome(s2) ? "true" : "false") << endl;

    // User input (optional)
    string s;
    cout << "\nEnter a string: ";
    cin >> s;
    cout << "Result: " << (validPalindrome(s) ? "true" : "false") << endl;

    return 0;
}
