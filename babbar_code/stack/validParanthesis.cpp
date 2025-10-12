#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st;  // Changed variable name from 's' to 'st' to avoid conflict
        
        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];
            
            // Opening bracket
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // Closing bracket
            else if (ch == ')' || ch == '}' || ch == ']') {
                // Check if stack is empty
                if (st.empty()) {
                    return false;
                }
                
                char topch = st.top();
                
                // Check for matching brackets
                if (ch == ')' && topch == '(') {
                    st.pop();
                }
                else if (ch == '}' && topch == '{') {
                    st.pop();
                }
                else if (ch == ']' && topch == '[') {
                    st.pop();
                }
                else {
                    // Brackets not matching
                    return false;
                }
            }
        }
        
        // If stack is empty, all brackets were matched
        return st.empty();
    }
};

int main() {
    Solution sol;
    string testCases[] = {
        "()",
        "()[]{}",
        "(]",
        "([)]",
        "{[]}",
        "((()))",
        "((())",
        ""
    };
    
    cout << "Testing bracket validation:\n";
    cout << "==========================\n\n";
    
    for (int i = 0; i < 8; i++) {
        string test = testCases[i];
        bool result = sol.isValid(test);
        
        cout << "Input: \"" << test << "\"" << endl;
        cout << "Result: " << (result ? "Valid" : "Invalid") << endl;
        cout << "-------------------\n";
    }
    
    // Interactive testing
    cout << "\nEnter a string to validate (or 'exit' to quit): ";
    string input;
    cin >> input;
    
    while (input != "exit") {
        bool result = sol.isValid(input);
        cout << "Result: " << (result ? "Valid" : "Invalid") << endl;
        
        cout << "\nEnter a string to validate (or 'exit' to quit): ";
        cin >> input;
    }
    
    return 0;
}