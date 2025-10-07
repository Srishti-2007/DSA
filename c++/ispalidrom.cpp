#include<iostream>
using namespace std;
bool ispalidrom(string str){
    int s=0;
    int e=str.length()-1;

    while(s<=e){
        if(isalpha(str[s])==false){
            s++;
            break;
        }
        if(isalpha(str[e])==false){
            e--;
            break;}
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main(){
    string str="ma1dam3";
    if(ispalidrom(str)){
        cout<<"palidrom hai"<<endl;
    }
    else{
        cout<<"palidrom nahi hai"<<endl;
    }

}