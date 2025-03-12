int solve(vector<int>&cost,int i,vector<int>&dp){
    if(i ==0 || i == 1)return 0;
    if(dp[i] !=-1)return dp[i];
    return dp[i] = min(solve(cost,i-1,dp)+cost[i-1],solve(cost,i-2,dp)+cost[i-2]);
}

int minCostClimbingStairs(vector<int>& cost) {
  vector<int>dp(cost.size()+1,-1);
  return solve(cost,cost.size(),dp);
}