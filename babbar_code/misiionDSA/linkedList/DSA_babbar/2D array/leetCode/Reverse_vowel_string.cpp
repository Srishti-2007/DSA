#include<iostream>
using namespace std;
class Vowel{
    public:
    bool isVowel(char ch){
        ch=tolower(ch); // convert upper value to lower value
        return ch=='a'||ch=='e'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
       string reverseVowel(string s){
        int l=0, h=s.size()-1;
        while(l<h){
            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(isVowel(s[l])==0){
                l++;
            }
            else
            {
                h--;
            }
        }
        return s;
    }

};
int main() {
    Vowel v;
    string s ="hello";
    cout<<v.reverseVowel(s)<<endl;

}