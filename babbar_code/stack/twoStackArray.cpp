#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top1; 
    int top2;

    stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    //functions
    void push1(int data){
        if(top2-top1==1){
            //no space available
            cout<<"Overflow in stack 1 : "<<endl;
        }
        else{
            //space available
            top1++;
            arr[top1]=data;
        }
    }
    void push2(int data){
        if(top2-top1==1){
            // not space available
            cout<<"Overflow in stack1"<<endl;
        }
        else{
            top2--;
            arr[top2]=data;
        }
    }
    void pop1(){
        if(top1==-1){
            //empty
            cout<<"Underflow in stack 1"<<endl;
        }
        else{
            //stack1 is non empty
            arr[top1]=0;
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            // stack2 is empty
            cout<<"Underflow in stack 2"<<endl;
        }
        else{
            // stack2 is non empty
            arr[top2]=0;
            top2++;
        }
    }
    void print(){
        cout<<endl;
        cout<<"top1 : "<<top1<<endl;
        cout<<"top2 : "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    stack s(10);
   s.push1(10);
   s.print();
   s.push1(20);
   s.print();
   s.push1(30);
   s.print();
   s.push1(40);
   s.print();
   s.push1(50);
   s.print();

   s.push2(100);
   s.print();
   s.push2(110);
   s.print();
   s.push2(120);
   s.print();
}