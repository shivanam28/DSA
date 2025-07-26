// this is a optimzed approach for finding subarray sum comes under dynamic programming, Time complexity: O(n)

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[]  = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum = INT_MIN;
    int currSum = 0;

        
        for( int i = 0; i<n; i++){
            currSum += arr[i];
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }

    cout<<"Maximum Subarray Sum of arr is "<<maxSum;

    return 0;
}