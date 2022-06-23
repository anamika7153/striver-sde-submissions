#include<bits/stdc++.h>
int removeDuplicates(vector<int> &a, int n) {
	// Write your code here.
    if(a.size()==0) return 0;
    int i=0;
    for(int j=1;j<n;j++) {
        if(a[j]!=a[i]) {
            i++;
            a[i]=a[j];
        }
    }
    return i+1;
    
}
