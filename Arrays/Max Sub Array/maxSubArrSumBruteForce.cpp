#include<iostream>
using namespace std;

int main(){

    int arr[]  = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum = arr[0];

    for(int st = 0; st<n; st++){
        int currSum = 0;
        for( int end = st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout<<"Maximum Subarray Sum of arr is "<<maxSum;

    return 0;
}