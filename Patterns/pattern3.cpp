#include <iostream>
using namespace std;

int main(){

    // pattern 
    // AAAA
    //  BBB
    //   CC
    //    D
   
    int n = 4;
    char ch = 'A';

    for( int i = 0; i<n; i++){
        
        for(int sp=0;sp<i;sp++){
            cout<<" ";
        }

        for(int j = n-i; j>0; j--){
            cout<<ch;
        }

        ch = ch+1;
        cout<<endl;
    }
    return 0;
}