#include<iostream>
using namespace std;

void merge(int arr[],int s, int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int* left=new int[len1];
    int* right=new int[len2];

    // Copy left
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k++];
    }
    // Copy right
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    }

    // Merge logic
    int leftindex=0 , rightindex=0 , mainarrayindex=s;
    while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainarrayindex++] = left[leftindex++];
        }
        else{
            arr[mainarrayindex++] = right[rightindex++];
        }
    }
    // Copy leftover left elements
    while(leftindex<len1){
        arr[mainarrayindex++] = left[leftindex++];
    }
    // Copy leftover right elements
    while(rightindex<len2){
        arr[mainarrayindex++] = right[rightindex++];
    }

    delete []left;
    delete []right;
}

void mergesort(int arr[],int s, int e){
    if(s >= e){
        return;  // base case
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);      // left
    mergesort(arr,mid+1,e);    // right
    merge(arr,s,e);            // merge
}

int main(){
    int arr[]={4,5,13,2,12};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
