#include<iostream>
using namespace std;


int main(){
    int N;
    int fact = 1;
    cout<<"Enter Number to get factorial: ";
    cin>>N;
    for(int i=N;i>0;i--){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}