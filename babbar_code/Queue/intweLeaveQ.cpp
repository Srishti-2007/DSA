#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleaveQ(queue<int> &q){
    //Step A:
    int n=q.size();
    if(q.empty()){
        return;
    }
    int k=n/2;
    int count=0;
    queue<int> q2;
    while(count<k){
        int elem=q.front();
        q.pop();
        q2.push(elem);
        count++;
    }
    //start intreleaving
  while(!q.empty()&& !q2.empty()){
    int first=q2.front();
    q2.pop();
    q.push(first);
    int second=q.front();
    q.pop();
    q.push(second);
  }
//old eala case in case of interleaving
   if(n&1){
    int elem=q.front();
    q.pop();
    q.push(elem);
}
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    interleaveQ(q);
    cout << "Printing Queue:" << endl;
    while(!q.empty()) {  
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
