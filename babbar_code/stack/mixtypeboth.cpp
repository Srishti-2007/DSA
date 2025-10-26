#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;
vector<int> prevsmaller(vector<int> &input){
    stack<int> s;
    s.push(-1);
    vector<int> ans(input.size());
    //left to right -> prev smaller
    for(int i=0;i<input.size();i++){
        int curr=input[i];
        //apka ans stack me
        while( s.top() != -1 && input[s.top()]>=curr){
            s.pop();
        }
            // chotta element mil chuka hai->ans stoe
            ans[i]=s.top();
            //push krdo curr element ko
            s.push(i);
        }
        return ans;
    }
    vector<int> nextsmaller(vector<int> &input){
        stack<int> s;
        s.push(-1);
        vector<int> ans(input.size());
        for(int i=input.size()-1;i>=0;i--){
            int curr = input[i];
            //apke answer stack me
            while(s.top()!= -1&& input[s.top()]>=curr){
                s.pop();
            }
            // chotta element mil chuka hai->ans stoe
            ans[i]=s.top();
            //push krdo curr element ko
            s.push(i);
        }
        return ans;
    }
    int getRectangularAreaHistogram(vector<int> &heights){
        //step 1:
        vector<int> prev=prevsmaller(heights);
        //step 2:
        vector<int> next=nextsmaller(heights);
        int maxArea=INT_MIN;
        int size=heights.size();
        for(int i=0;i<heights.size();i++){
            int length=heights[i];
            if(next[i]== -1){
                next[i]=size;
            }
            int width=next[i]-prev[i]-1;

            int area=length*width;
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
    int main(){
        vector<int> v;
        v.push_back(2);
        v.push_back(1);
        v.push_back(5);
        v.push_back(6);
        v.push_back(2);
        v.push_back(3);

        cout<<"Ans is : "<<getRectangularAreaHistogram(v)<<endl;
        return 0;
    }