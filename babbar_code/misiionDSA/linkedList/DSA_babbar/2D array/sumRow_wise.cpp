#include<iostream>
using namespace std;
void row_wise_sum(int arr[][3], int row, int col){
    cout<<"printing Row wise sum"<<endl;
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
    // row wise input 
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
        cin>>arr[i][j];
       }
    } 
    cout<<"printing row wise"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    row_wise_sum(arr,row,col);
    return 0;
}