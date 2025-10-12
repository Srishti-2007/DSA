#include<iostream>
#include<stack>
using namespace std;
void printmiddle(stack<int> &s, int $totalsize){
    if(s.size()==0){
        cout<<"there is no Middle element in stack : "<<endl;
        return;
    }
    //base case
    if(s.size()==$totalsize/2 + 1){
        cout<<"Middle element : "<<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();
    //recursive call
    printmiddle(s,$totalsize);
    //backtrack
    s.push(temp);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    int totalsize=s.size();
    printmiddle(s,totalsize);
    return 0;
}