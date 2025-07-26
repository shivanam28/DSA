#include<iostream>
using namespace std;

bool primechecker(int n){

     for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            return false;
            break;
        }
    }

}

int main(){

    int n;
    bool isprime = true;
    cout<<"Enter a number to check whether its prime or not: ";
    cin>>n;

    isprime = primechecker(n);

        if(isprime){
            cout<<n<<" is a prime number!";
        }
        else{
            cout<<n<<" is not a prime number!";
        }

    return 0;

}