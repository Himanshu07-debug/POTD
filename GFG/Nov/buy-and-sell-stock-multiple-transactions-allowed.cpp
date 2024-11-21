int maximumProfit(vector<int> &prices) {
        
    // code here
    int ans = 0, n = prices.size();
    
    for(int i = 1; i < n; i++){
        
        if(prices[i] > prices[i-1]){
            ans += (prices[i] - prices[i-1]);
        }
        
    }
    
    return ans;
}