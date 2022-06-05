#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
        int i=0,curr=0,j=n-1;
        while(curr<=j) {
            if(arr[curr]==0) {
                int t = arr[curr];
                arr[curr] = arr[i];
                arr[i] = t;
                i++;
                curr++;
            }
            else if(arr[curr] == 1) {
                curr++;
            }
            else if(arr[curr]==2) {
                int t = arr[curr];
                arr[curr] = arr[j];
                arr[j] = t;
                j--;
            }
        }

}
