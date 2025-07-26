#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a Number to check if it is a power of 2 or not: ";
    cin>>n;

    int res = n & (n-1);
    if(res == 0){
        cout<<n<<" is the power of 2.";
    }
    else{
        cout<<n<<" is not a power of 2.";
    }
    return 0;
}