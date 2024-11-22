int maximumProfit(vector<int> &prices) {
    // code here
    
    int ans = 0, mi = INT_MAX;
    
    for(int x : prices){
        mi = min(mi, x);
        ans = max(ans, x - mi);
    }
    
    return ans;
}