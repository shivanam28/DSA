// this is the most optimized approach to find the majority element in an array using moore's Algorithm, Time Complexity: O(n)
#include<iostream>
#include<vector>
using namespace std;

int findMajorityElement(vector<int> nums){
    int freq = 0, ans = 0;

    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        else if( ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    return ans;
}



int main(){

    vector<int> nums = {1,2,2,1,1};

    int ans = findMajorityElement(nums);
    cout<<ans<<" is the Majority element using Moore's Algorithm";

    return 0;
}