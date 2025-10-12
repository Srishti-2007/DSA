#include<iostream>
using namespace std;
int factorial(int n){
    // base case
    if(n==1)
    return 1;
    // recursive case
    return n*factorial(n-1);
}
int main() {
    int n;
    cout<<"Enter a number to find its factorial : ";
    cin>>n;
    int result=factorial(n);
    cout<<"Answer is "<<result<<endl;
    return 0;
}