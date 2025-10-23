#include<iostream>
using namespace std;
#include<deque>
int main(){
    deque<int> q;
    q.push_front(20);
    q.push_back(30);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_front();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_back();
    if(q.empty()){
        cout<<"Q is empty";
    }
    else{
        cout<<"Q is non empty";
    }
    return 0;
}