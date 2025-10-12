#include<iostream>
#include<vector>
using namespace std;
int main() {
    // Create vector
    vector<int> arr;

    //  int ans= (sizeof(arr)/sizeof(int));
    //  cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);

    //print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // remove or deleate
    arr.pop_back(); 
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int> brr(n,2);
    cout<<"size of b"<<brr.size()<<endl;
    cout<<"capacity of b"<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing Crr"<<endl;
    vector<int> crr{10,30,40,60};
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

}