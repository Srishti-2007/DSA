#include<iostream>
using namespace std;
bool check_key(string& str,int i, int& n, char &key){
     // base case
     if(i>=n)
     return false;
     // 1 case solve kr lo
     if(str[i]==key){
        return true;
     }
     // baki recrusin solve kr lega
     return check_key(str,i+1,n,key);
};
int main() {
     string str="srishti";
     int n=str.length();
     char key='k';
     int i=0;
     bool ans=check_key(str,i,n,key);
     cout<<"answer is "<<ans<<endl;
     return 0;
}