// This is the optimized approach used to find majority element in an sorted array, Time Complexity: O(nlogn)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMajorityElement(vector<int> nums){
    int majority = nums.size()/2;
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];

    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq--;
            ans = nums[i];
        }

        if(freq > majority){
        return ans;
    }
    }


}

int main(){

    vector<int> nums = {1,2,2,1,1};

    int ans = findMajorityElement(nums);
    cout<<ans<<" is the Majority element using optimized approach";


    return 0;
}