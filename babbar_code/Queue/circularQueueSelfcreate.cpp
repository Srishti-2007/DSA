#include<iostream>
using namespace std;
class cirQue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    cirQue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data){
        //Q is full
        if(front==0 && rear==size-1){
            cout<<"Q is full"<<endl;
        }
        //single element case-> first element
        else if(front==-1&&rear==-1){
            front=rear=0;
            arr[rear]=data;
        }
        //circular nature
        else if(rear=size-1&&front!=0){
            rear=0;
            arr[rear]=data;
        }
        //normal flow
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        //empty check
        if(front==-1 && rear==-1){
            cout<<"Q is empty"<<endl;
        }
        //single elemnt
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        //circular natue
        else if(front==size-1){
            front=0;
        }
        //normal flow
        else{
            front++;
        }
    }

};
int main(){
     cirQue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
}