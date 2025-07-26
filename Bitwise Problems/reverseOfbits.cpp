#include<iostream>
#include <bitset>
using namespace std;

int revbits(int n){
    int res = 0;
    for(int i = 0; i < 32; i++){
        int lsb = n & 1;
        int revlsb = lsb << (31-i);
        res = res | revlsb;
        n = n >> 1;
    }

    return res;
}

int main(){

    int n;
    cout<< "Enter Number to reverse: ";
    cin>>n;

    int rev = revbits(n);

    cout << "\nOriginal Number: " << n << endl;
    cout << "Binary:           " << bitset<32>(n) << endl;

    cout << "\nReversed Bits as Integer: " << rev << endl;
    cout << "Reversed Bits in Binary:   " << bitset<32>(rev) << endl;
    
    return 0;
}