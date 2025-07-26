#include <iostream>
using namespace std;

int main(){

    // pattern 
    // A
    // BA
    // CBA
   
    int n = 4;
    char ch = 'A';
    for( int i = 0; i<n; i++){
        
        for(char ch= 'A' + i - 1; ch >= 'A'; ch--){
            cout<<ch;
            
            
        }
        cout<<endl;
        
    }
    return 0;
}