#include<iostream>
using namespace std;
class queue{
    public:
    int size;
    int *arr;
    int rear;
    int front;

    queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"Q is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"Q is empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int getfront(){
        if(front==rear){
            cout<<"q is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }
    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            false;
        }
    }
    int getsize() {
        return rear-front;
    }
};
int main(){
    queue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.pop();
    cout<<"size of queue is "<<q.getsize()<<endl;
    cout<<"front elemnt of queue is"<<q.getfront();
    if(q.isempty()){
        cout<<"Q is empty"<<endl;
    }
    else{
        cout<<"q is non empty"<<endl;
    }
}