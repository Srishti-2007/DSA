#include<iostream>
#include<stack>
#include<vector>
using namespace std;
    vector<int> nextsmaller(vector<int> &input){
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());
        for(int i=input.size()-1;i>=0;i--){
            int curr = input[i];
            //apke answer stack me
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