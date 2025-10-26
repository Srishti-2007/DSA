#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKElem(queue<int> &q,int k){
    //step A : queue -> K-> stack
    stack<int> s;
    int count=0;
    while(count<k){
        int elem=q.front();
        q.pop();
        s.push(elem);
        count++;
    }
    //step B : stack elem-> Q
    while(!s.empty()){
        int elem=s.top();
        s.pop();
        q.push(elem);
    }
    //step C : push n-k (bache hoye elem) elem from q front to back
    int n=q.size();
    count=0;
    while(count<n-k){
        int elem=q.front();
        q.pop();
        q.push(elem);
        count++;
    }

}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseKElem(q,5);
    cout << "Printing Queue:" << endl;
    while(!q.empty()) {  
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
