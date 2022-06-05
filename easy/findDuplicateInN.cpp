#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n, sum=0;
    n=arr.size();
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int sumN = (n*(n-1))/2;
    return (sum-sumN) ;
}
