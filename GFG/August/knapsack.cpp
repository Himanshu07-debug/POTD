int help(int i, int w, int cap, vector<int>& wt, vector<int>& val, int n, vector<vector<int>> &dp){

    if(i == n) return 0;
    
    if(w == cap) return 0; 
    
    if(dp[i][w] != -1) return dp[i][w];

    int skip = help(i+1, w, cap, wt, val, n, dp);

    int pick = 0;

    if(w + wt[i] <= cap){
        pick = val[i] + help(i+1, w + wt[i], cap, wt, val, n, dp);
    }

    return dp[i][w] = max(pick, skip);

}

    
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        
        int n = wt.size();
        vector<vector<int>> dp(n, vector<int>(W+1, -1));

        return help(0, 0, W, wt, val, n, dp);
    }