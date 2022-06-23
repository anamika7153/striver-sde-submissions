#include <bits/stdc++.h> 
int maximumProfit(vector<int> &a){
    // Write your code here.
    int sell=a[0], maxProfit = 0, profit =0;
    for(int i=0;i<a.size();i++) {
        sell = min(sell,a[i]);
        profit = a[i] - sell;
        maxProfit = max(profit,maxProfit);
    }
    return maxProfit;
}
