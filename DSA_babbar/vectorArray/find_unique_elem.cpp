#include<iostream>
#include<vector>
using namespace std;
int find_uniq_elem(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of an arry"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniq_elem=find_uniq_elem(arr);
    cout<<"Unique element is"<<uniq_elem<<endl;
}