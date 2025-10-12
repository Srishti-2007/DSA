#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,1,1,1,2,3,4,4};
    int length=9;
    int k,i;
    for(i=1;i<length-1;i++){
        if(arr[i]!=arr[i-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int k=0;i<5;i++){
        cout<<arr[k]<<" ";
    }
}