int kthElement(int k, vector<int>& a, vector<int>& b) {
    // code here
    int n1=a.size();
    int n2=b.size();
    if(n1>n2) return kthElement(k, b, a);
    
    int left=k;
    int lo=max(0, k-n2), hi=min(k, n1);
    
    while(lo<=hi){
        int mid1=(lo+hi)>>1;
        int mid2=left-mid1;
        int l1=INT_MIN, l2=INT_MIN;
        int r1=INT_MAX, r2=INT_MAX;
        if(mid1<n1) r1=a[mid1];
        if(mid2<n2) r2=b[mid2];
        if(mid1-1>=0) l1=a[mid1-1];
        if(mid2-1>=0) l2=b[mid2-1];
        
        if(l1<=r2 && l2<=r1){
            return max(l1, l2);
        }else if(l1>r2) hi=mid1-1;
        else lo=mid1+1;
    }
    return 0;
}