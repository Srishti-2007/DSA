#include<iostream>
#include<limits.h>
using namespace std;
 void find_max(int arr[][3],int row,int col){
       int max=INT_MIN;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    cout<<"Maximum number is "<<max<<endl;
}
void find_min(int arr[][3],int row,int col){
       int min=INT_MAX;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(min>arr[i][j])
            min=arr[i][j];
        }
    }
    cout<<"Minimum number is "<<min<<endl;
}
int main() {
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    find_max(arr,row,col);
    find_min(arr,row,col);
    return 0;
}