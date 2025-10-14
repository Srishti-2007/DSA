#include<iostream>
#include<stack>
using namespace std;

int main() {
    string s = "abbaca";   // given string
    stack<char> st;        // stack to store characters

    // loop through each character of the string
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];    // current character

        // if stack is not empty and top element is same as current char
        if (!st.empty() && st.top() == ch) {
            st.pop();      // remove the duplicate (both same chars)
        } 
        else {
            st.push(ch);   // otherwise push current character
        }
    }

    // now the remaining stack elements form the answer in reverse order
    string result = "";

    // take out elements from stack one by one
    while (!st.empty()) {
        result = st.top() + result;  // add to front of result
        st.pop();
    }
    // result currently is reversed, so reverse it once
    // reverse(result.begin(), result.end()); // you can include <algorithm> for reverse
    cout << "After removing adjacent duplicates: " << result << endl;

    return 0;
}