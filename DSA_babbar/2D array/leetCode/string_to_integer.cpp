#include <iostream>
#include <string>
#include <climits>
#include <cctype>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int num = 0, i = 0, sign = 1;

        // Step 1: skip leading spaces
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // Step 2: handle + or - sign
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }

        // Step 3: convert digits
        while (i < s.size() && isdigit(s[i])) {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')) {
                return (sign == -1) ? INT_MIN : INT_MAX;
            }

            num = num * 10 + (s[i] - '0');
            i++;
        }

        return num * sign;
    }
};

int main() {
    Solution sol;

    cout << sol.myAtoi("42") << endl;             // Output: 42
    cout << sol.myAtoi("   -42") << endl;         // Output: -42
    cout << sol.myAtoi("4193 with words") << endl; // Output: 4193
    cout << sol.myAtoi("words and 987") << endl;   // Output: 0
    cout << sol.myAtoi("-91283472332") << endl;    // Output: -2147483648 (INT_MIN)

    return 0;
}
