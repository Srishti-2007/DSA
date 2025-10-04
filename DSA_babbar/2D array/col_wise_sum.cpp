#include<iostream>
using namespace std;
void col_wise_sum(int arr[][3], int row, int col) {
    cout<<"printing col wise sum"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
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
    cout<<"printing col wise"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    col_wise_sum(arr,row,col);
    return 0;
}