int maxProduct(vector<int> &arr) {
        
    // Your Code Here
    int ans = INT_MIN;
    
    int p = 1, s = 1;
    int n = arr.size();
    
    for(int i = 0, j = n-1; j>=0 && i < n; i++, j--){
        
        if(p == 0) p = 1;
        if(s == 0) s = 1;
        
        p *= arr[i];
        s *= arr[j];
        
        ans = max({ans, p, s});
        
    }
    
    return ans;
    
}