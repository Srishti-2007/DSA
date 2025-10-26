#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> prevsmaller(vector<int> &input){
    stack<int> s;
    s.push(-1);
    vector<int> ans(input.size());
    //left to right -> prev smaller
    for(int i=0;i<input.size();i++){
        int curr=input[i];
        //apka ans stack me
        while(s.top()>=curr){
            s.pop();
        }
            // chotta element mil chuka hai->ans stoe
            ans[i]=s.top();
            //push krdo curr element ko
            s.push(curr);
        }
        return ans;
    }