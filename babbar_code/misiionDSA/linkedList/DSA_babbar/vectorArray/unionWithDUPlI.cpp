#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    vector<int>arr{1,2,3,5,4,5};
    vector<int>brr{3,3,4,6,7,5};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
                break;
            }
        }
    }
     for(int i=0;i<arr.size();i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++)
    {
        ans.push_back(brr[i]);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]!=INT_MIN){
            cout<<ans[i]<<" ";
        }
    }
}