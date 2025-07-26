#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,6,4,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size;i++){
        bool unique = true;
        for(int j=0; j<size; j++){
            if(i!=j && arr[i]==arr[j]){
                unique = false;
                break;
            }
          
        }
        if(unique){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}