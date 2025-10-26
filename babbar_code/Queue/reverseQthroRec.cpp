#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q) {
    //base case
    if(q.empty())
    return;

    //step a 
    int temp=q.front();
    q.pop();
    // step b
    reverseQueue(q);
    //step c BT
    q.push(temp);
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueue(q);

    cout << "Printing Queue:" << endl;
    while(!q.empty()) {  
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
