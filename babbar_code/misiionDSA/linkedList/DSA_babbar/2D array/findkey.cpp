#include<iostream>
using namespace std;

bool findkey(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){             // Corrected loop bounds
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
            return true;}
        }
        return false;
    }
}

int main() {
    int arr[3][3];
    int row = 3;
    int col = 3;
    int key=5;

    // Input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }

    cout << "printing row wise" << endl;
    for(int i=0;i<col;i++){             // Corrected loop bounds
        for(int j=0;j<row;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Function call
   cout<<findkey(arr,row,col,key);

    return 0;
}
