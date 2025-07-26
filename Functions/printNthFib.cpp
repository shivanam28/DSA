#include<iostream>
using namespace std;

int Nfib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Nfib(n-1) + Nfib(n-2);
}

int main(){

    int n;
    cout<<"This is a program to print Nth fibonacci\n Please enter Nth position to print: ";
    cin>>n;

    int res = Nfib(n);
    cout<<res<<" fibonacci number is at the "<<n<<"th position.";

    return 0;
}