#include<iostream>
#include<string.h>
using namespace std;
bool Palidrom(char sentence[]) {
    int i=0;
    int n=strlen(sentence);
    int l=n-1;
    while(i<=l){
        if(sentence[i]!=sentence[l]){
            return false;
        }
        else {
            i++;
            l--;
        }
    }
    return true;
}
int main() {
    char arr[100]="madam";
    cout<<"Check Palidrom : "<<Palidrom(arr);
}