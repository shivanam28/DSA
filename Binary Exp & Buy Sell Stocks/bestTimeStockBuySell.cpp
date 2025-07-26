#include<iostream>
using namespace std;

int checkProfit(int prices[], int n){

    int maxprofit = 0, bestbuy = prices[0];

    for(int i = 1; i<n; i++){
        if(prices[i] > bestbuy){
            maxprofit = max(maxprofit, prices[i]-bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
    }

    return maxprofit;
}

int main(){
    int stockPrices[] = {7,1,5,3,6,4};
    int n = sizeof(stockPrices)/sizeof(stockPrices[0]);
    int maxProfit = checkProfit(stockPrices, n);

    cout<< "Max profit: "<<maxProfit;


    return 0;
}