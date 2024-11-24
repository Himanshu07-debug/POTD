int maxSubarraySum(vector<int> &arr) {
    // code here...
    int mx = INT_MIN;
    
    int sum = 0;
    
    for(int x : arr){
        
        sum += x;
        
        mx = max(mx, sum);
        
        if(sum < 0) sum = 0;
        
    }
    
    return mx;
}