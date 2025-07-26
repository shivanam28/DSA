#include<iostream>
using namespace std;

int main(){

    // pattern
    // 1
    // 12
    // 123
    
    int n=4;
    for(int i = 0;i<n; i++){
        for(int j = 1; j<i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }


    //  pattern reverse ( uncomment this to run)
    //   1
    //  21
    // 321


    //  for(int i = 0;i<n; i++){
    //     for(int sp = n-i-1; sp>0; sp--){
    //         cout<<" ";
    //     }
    //     for(int j=i+1; j>0; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

}