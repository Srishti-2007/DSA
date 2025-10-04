#include<iostream>
using namespace std;
int solve(int diviended, int divisior){
    int s=0;
    int ans;
    int e=abs(diviended);
    int mid=s+(e-s)/2;
    while(s<=e){
        // perfect solution
        if(abs(mid*divisior)==abs(diviended))
        ans= mid;
        break;
        //  non perfect solution
        if(abs(mid*divisior)>abs(diviended)){
        e=mid-1; //left search
         }
        else {
            // store value
            ans=mid;
            // right search
            s=mid+1;
        }
       mid=s+(e-s)/2;
    }
    if((divisior<0 &&diviended<0) || (divisior<0 &&diviended<0))
    return ans;
    else
    return -ans;

}
int main(){
    int dividend=22;
    int divisior=-7;
    int ans=solve(dividend,divisior);
    cout<<"ans is "<<ans<<endl;
    return 0;
}