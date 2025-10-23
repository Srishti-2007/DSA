#include<iostream>
using namespace std;
class deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void pushRear(int data){
        if(front==0 && rear==size-1){
            cout<<"Q is full "<<endl;
            return;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1&&front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
    void pushfront(int data){
        if(front==0 && rear==size-1){
            cout<<"Q is full "<<endl;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0&&rear!=size-1){
           front=size-1;
        }
        else{
           front--;
        }
        arr[front]=data;
    }
    void popfront(){
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
            arr[front]=-1;
            front=0;
        }
        //normal flow
        else{
            arr[front]=-1;
            front++;
        }
    }
    void popRear(){
          if(front==-1){
            cout<<"Q is empty"<<endl;
            return;
        }
        //single elemnt
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        //circular natue
        else if(rear==0){
            arr[rear]=-1;
           rear=size-1;
        }
        //normal flow
        else{
            arr[rear]=-1;
           rear--;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};