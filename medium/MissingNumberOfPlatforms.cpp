int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int j=0,pt=1;
    for(int i=1;i<n;i++){
        if(at[i]<=dt[j]){
            pt++;
        }
        else{
            j++;
        }
    }
    return pt;
}
