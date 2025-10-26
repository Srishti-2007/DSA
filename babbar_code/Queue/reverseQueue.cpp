#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;

    // Step 1: Put all elements of q into s
    while(!q.empty()) {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // Step 2: Put all elements from s back into q
    while(!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }
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
