// Minimum Time Difference
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // Step 1: Convert all times into total minutes
        vector<int> minutes;
        for (int i = 0; i < timePoints.size(); i++) {
            string curr = timePoints[i];

            int hours = stoi(curr.substr(0, 2));   // pehle 2 char = HH
            int mins  = stoi(curr.substr(3, 2));   // last 2 char = MM
            int totalMinutes = hours * 60 + mins;  // convert to total minutes
            minutes.push_back(totalMinutes);
        }

        // Step 2: Sort the minutes
        sort(minutes.begin(), minutes.end());

        // Step 3: Find minimum difference
        int mini = INT_MAX;
        int n = minutes.size();

        // 3a. Adjacent differences
        for (int i = 0; i < n - 1; i++) {
            int diff = minutes[i + 1] - minutes[i];
            mini = min(mini, diff);
        }

        // 3b. Wrap-around case (last → midnight → first)
        int wrapDiff = (24 * 60 - minutes[n - 1]) + minutes[0];
        mini = min(mini, wrapDiff);

        return mini;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<string> timePoints1 = {"01:00","03:30","22:00","14:39","00:15","09:35"};
    cout << "Minimum Difference = " << sol.findMinDifference(timePoints1) << " minutes" << endl;

    // Example 2
    vector<string> timePoints2 = {"01:00", "03:30", "22:00"};
    cout << "Minimum Difference = " << sol.findMinDifference(timePoints2) << " minutes" << endl;

    // Example 3
    vector<string> timePoints3 = {"23:59", "00:00", "12:00"};
    cout << "Minimum Difference = " << sol.findMinDifference(timePoints3) << " minutes" << endl;

    return 0;
}
