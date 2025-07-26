#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int largest = INT_MIN, smallest = INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    int temp = smallest;
    smallest = largest;
    largest = temp;

    cout<<"Largest: "<<largest<<"\nSmallest: "<<smallest<<endl;
    return 0;
}