#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> arr) {
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s)
}
int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans =solve(arr);
    cout<<"ans is"<<ans<<endl;
    return 0;
}