#include<iostream>
using namespace std;
int findelem(int arr[], int size,int target){
    for(int i=0;i<=size;i++){
        if(arr[i]==target)
        return arr[i];
    }
    return -1;

}
int main() {
    int arr[]={3,5,7,9,10};
    int size=4;
    int target=5;
    int ans = findelem(arr,size,target);
    cout<<ans;

}