#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Pair Sum
    vector<int> arr{10, 20, 40, 60, 70};
    int sum = 80;

    // Print all pairs
    // Outer loop will traverse for each element
    for(int i = 0; i < arr.size(); i++) {
        int element = arr[i];

        // For every element, traverse on aage wale elements
        for(int j = i + 1; j < arr.size(); j++) {
            if(element + arr[j] == sum) {
                cout << "Pair Found " << element << ", " << arr[j] << endl;
            }
        }
    }
}
