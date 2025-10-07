#include<iostream>
#include<vector>
using namespace std;
// Q6 find peack index
int findpeakIndex(vector<int> arr) {
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]) {
            // right search
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main() {
    vector<int> v{0,10,5,2};
    int ans=findpeakIndex(v);
    cout<<ans<<endl;
    return 0;
}