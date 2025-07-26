#include<iostream>
#include<vector>
using namespace std;

int findMajorityElement(vector<int> nums){
    int majority = nums.size()/2;

    for( int val: nums){
        int freq = 0;
        for( int ele: nums){
            if( ele == val){
                freq++;
            }
            if(freq > majority){
                return val;
            }
        }
    }

}

int main(){

    vector<int> nums = {1,2,2,1,1};

    int ans = findMajorityElement(nums);
    cout<<ans<<" is the Majority element using brute force approach";


    return 0;
}