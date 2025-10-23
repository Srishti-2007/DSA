#include<iostream>
using namespace std;
#include<queue>

int main(){
    //creation 
    queue<int> q;
    //insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);
    //size
    cout<<"size of queue is"<<q.size()<<endl;
    //removal
    q.pop();
    cout<<"size os queue is "<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty";
    }
    //front elemnt
    cout<<"Front element is"<<q.front()<<endl;
    //back element
    cout<<"back : "<<q.back()<<endl;
    return 0;
}