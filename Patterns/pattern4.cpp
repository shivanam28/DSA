#include <iostream>
using namespace std;

int main(){

    // pattern 
    // _ _ _ 1
    // _ _ 1 2 1
    // _ 1 2 3 2 1
   
    int n = 4;
   
    for( int i = 0; i<n; i++){
        
        for(int sp = 0; sp < n-i-1; sp++){
            cout<<" ";
        }

        for(int j1 = 1; j1 <= i+1; j1++){
            cout<<j1;
        }

        for(int j2 = i; j2 >= 1; j2--){
            cout<<j2;
        }
        cout<<endl;
        
    }
    return 0;
}