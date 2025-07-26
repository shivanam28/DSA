#include<iostream>
#include<vector>
using namespace std;

void reverseVec(vector<int> &b){
    int start = 0;
    int end = b.size() - 1;
    
    while(start<end){
        swap(b[start],b[end]);
        start++;
        end--;
    }

}

int main(){

    vector<int> b = {1,2,3,4,5};
    reverseVec(b);

    for( int val : b){
        cout<< val<< " ";
    }

    return 0;
}