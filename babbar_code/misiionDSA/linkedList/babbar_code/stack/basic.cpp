#include<iostream>
#include<stack>
using namespace std;
int main(){
    //Creation
    stack<int> st;

    //Insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //deletion or remove
    st.pop();

    // check element on top
    cout<<"Element on top is : "<<st.top()<<endl;
    //check size
    cout<<"Total size is : "<<st.size()<<endl;
    //check empty
    if(st.empty()){
        cout<<"Empty";
    }
    else
    cout<<"non empty";

    //printing
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}