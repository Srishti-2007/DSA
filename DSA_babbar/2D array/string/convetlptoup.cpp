#include<iostream>
#include<string.h>
using namespace std;
void converter(char arr[]) {
    int i=0;
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-32;
        // another method
        //arr[i]=arr[i]-'a'+'A';
    }
}
int main() {
     char arr[100]="srishti";
     converter(arr);
     cout<<arr;
}