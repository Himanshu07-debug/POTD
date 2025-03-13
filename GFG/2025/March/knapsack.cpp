int dp[1001][1001];
int solve(int W, vector<int>&val , vector<int>& wt, int i) {
    
    if(i >= wt.size()){
        return 0;
    }
    int taken = 0;
    if(dp[i][W] != -1){
        return dp[i][W];
    }
    if(wt[i] <= W){
        taken = val[i] + solve(W-wt[i],val,wt,i+1);
    }
    int skip = solve(W,val,wt,i+1);
    
    return dp[i][W] = max(taken,skip);
}
int knapsack(int W, vector<int> &val, vector<int> &wt) {
    
    memset(dp,-1,sizeof(dp));
    return solve(W,val,wt,0);
}