#include<iostream>
#include<vector>
using namespace std;

// Q5 find first occurrence of element using binary search
int firstOcc(vector<int> v, int target){
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (v[mid] == target) {
            ans = mid;
            e = mid - 1; // left search
        }
        else if (target < v[mid]) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    vector<int> v{1, 3, 4, 4, 4, 6, 7};
    int target = 4;
    
    int index = firstOcc(v, target);
    cout << "First occurrence of " << target << " is at index: " << index << endl;

    return 0;
}
