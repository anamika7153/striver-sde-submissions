#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_set<int> s;
    set<int> dup;
    int ele;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
        else {
            dup.insert(arr[i]);
            ele = arr[i];
            break;
        }
    }
    return ele;
    
}
