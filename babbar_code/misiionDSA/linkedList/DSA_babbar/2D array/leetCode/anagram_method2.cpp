#include<iostream>
using namespace std;
class Anagram {
    public:
    bool isAnagram(string s, string t){
        for(int i = 0; i < s.size()-1; i++) {
        for(int j = 0; j < s.size()-i-1; j++) {
            if(s[j] > s[j+1]) {
                // custom swap
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < t.size()-1; i++) {
        for(int j = 0; j < t.size()-i-1; j++) {
            if(t[j] > t[j+1]) {
                // custom swap
                char temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
       }
       if(s==t){
        return true;
       }
       else
       return false;
     } 
};
int main() {
    Anagram obj;
    string s="anagram";
    string t="naagram";
    cout<<obj.isAnagram(s,t);
    return 0;
}