#include<iostream>
using namespace std;
// class stack{
//     public:
//     int *arr; //dynamically create array
//     int size; //size for like arr[]; we mention size
//     int top;//for indexing purpous
//     stack(int size){
//         arr=new int[size];
//       this->size=size;
//       top=-1 ;//invalid indexing for stating purpous
//     }
//     //functions
//     void push(int data){
//         if(size-top>1){
//             //space available
//             //insert
//             top++;
//             arr[top]=data;
//         }
//         else{
//             //space not available
//             cout<<"Stack overflow"<<endl;
//         }
//     }
//     void pop(){
//         if(top==-1){
//             //stack is empty
//             cout<<"Stack underflow "<<endl;
//         }
//         else{
//             //stack is non empty
//             top--;
//         }
//     }
//     int get_top(){
//         if(top==-1){
//             cout<<"There is no element in stack "<<endl;
//         }
//         else{
//             return arr[top];
//         }
//     }
//     int size(){
//         return top+1;
//     }
//     bool isempty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
class stack {
public:
    int *arr;
    int size;
    int top;

    stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data) {
        if (size - top > 1) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }

    int get_top() {
        if (top == -1) {
            cout << "There is no element in stack" << endl;
            return -1;  // ✅ must return something
        } else {
            return arr[top];
        }
    }

    int get_size() {     // ✅ renamed
        return top + 1;
    }

    bool isempty() {
        return (top == -1);
    }
};
int main(){
    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.get_top();
    cout<<s.isempty();
}
