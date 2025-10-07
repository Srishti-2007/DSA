#include <iostream>
using namespace std;
// q Remove All Adjacent Duplicates in String along with a C++ solution.
class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";  // This will act like a stack

        for (int i = 0; i < s.length(); i++) {
            if (!ans.empty() && ans.back() == s[i]) {
                // If last char in ans matches current char → remove last one
                ans.pop_back();
            } else {
                // Otherwise add current char
                ans.push_back(s[i]);
            }
        }
        return ans; // Final string after all removals
    }
};

int main() {
    Solution obj;
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = obj.removeDuplicates(s);
    cout << "Final string after removing duplicates: " << result << endl;

    return 0;
}
