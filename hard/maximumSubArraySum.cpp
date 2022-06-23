#include <bits/stdc++.h> 
long long maxSubarraySum(int a[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    int curr_sum=0, max_sum=0;
    for(int i=0;i<n;i++) {
        curr_sum += a[i];
        if( curr_sum > max_sum ) {
            max_sum = curr_sum;
        }
        if( curr_sum <= 0 ) {
            curr_sum = 0;
        }
    }
    return max_sum;
}
