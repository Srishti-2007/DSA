#include <iostream>
using namespace std;
// q Remove All Occurrences of a Substring
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);   // Line 1

        while (pos != string::npos) {   // Line 2
            s.erase(pos, part.length()); // Line 3
            pos = s.find(part);          // Line 4
        }

        return s;  // Line 5
    }
};

int main() {
    Solution obj;
    string s = "daabcbaabcbc";
    string part = "abc";

    string result = obj.removeOccurrences(s, part);
    cout << "Final string: " << result << endl;

    return 0;
}
