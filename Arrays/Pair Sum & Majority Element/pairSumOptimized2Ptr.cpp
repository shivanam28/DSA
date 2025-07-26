// this is a 2 pointer approach used to find the best suitable paired sum, Time Complexity = O(n)

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSumOptimized(vector<int> arr, int target){

    int n = arr.size();
    vector<int> ans;
    int i=0, j=n-1;

    while(i<j){
        int pairsum = arr[i] + arr[j];
        if(pairsum > target){
            j--;
        }
        else if(pairsum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){

    vector<int> arr = {2,7,11,15};
    int target = 13;
  
    vector<int> ans = pairSumOptimized(arr, target);
    cout<<arr[ans.at(0)]<<" + "<<arr[ans.at(1)]<<" = "<<target;


    return 0;
}