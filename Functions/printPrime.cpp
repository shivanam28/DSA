#include<iostream>
using namespace std;

bool checkprime(int a){

     for(int i = 2; i*i <= a; i++){
        if(a%i==0){
            return false;
            break;
        }
    }
}

void printprime(int n){
    for(int i = 2; i<=n; i++){
        bool isprime = checkprime(i);
        if(isprime){
            cout<<i<<" ";
        }
    }
}

int main(){

    int n;
    cout<<"This program will print 2 to N prime numbers! \n Please enter the value of N: ";
    cin>>n;

    printprime(n);

    return 0;
}