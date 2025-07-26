#include<iostream>
using namespace std;

double power(int x, int n){

    long binform = n;
    double ans = 1;

    if(n<0){
        x = 1/x;
        binform = -binform;
    }

    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x == -1 && n%2==0) return 1.0;
    if(x == -1 && n%2!=0) return -1.0;

    
    while(binform > 0){
        if(binform%2 == 1){
            ans *= x;
        }
        x *= x;
        binform/=2;
    }
    return ans;
}

int main(){

    double ans = power(3,5);
    cout<<ans;

    return 0;
}