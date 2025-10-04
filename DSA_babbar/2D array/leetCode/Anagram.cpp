#include<iostream>
using namespace std;
class anagram {
public:
    bool isAnagram(string s, string t) {
        int frqtable[256]={0};
        for(int i=0;i<s.size();i++){
            frqtable[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            frqtable[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(frqtable[i]!=0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    anagram obj;
    string s="rat";
    string t="car";
    cout<<obj.isAnagram(s,t);
    return 0;
}