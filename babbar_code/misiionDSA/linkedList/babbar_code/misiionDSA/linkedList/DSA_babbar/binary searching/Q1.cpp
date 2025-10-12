#include<iostream>
using namespace std;
// Q1 using binary search find target element
int binarySearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2; // stat+(end-start)/2 bcz of overflow
    while(start<=end){
        int elemnt=arr[mid];
        if(elemnt==target){
            return mid;
        }
        else if(target<elemnt){
            // search in left
            end=mid-1;
        }
        else
        {
            // search in right
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    // element not found
    return -1;
}
int main() {
    int arr[]={2,4,6,8,10,12,14};
    int size=7;
    int target=6;

    int indexOfTarget=binarySearch(arr,size,target);
    if (indexOfTarget==-1){
        cout<<"target not found"<<endl;
    }
    else
    {
        cout<<"traget found "<<indexOfTarget<<" index"<<endl;
    }
    return 0;
}
