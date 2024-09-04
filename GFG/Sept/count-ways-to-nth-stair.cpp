int dp[10003][2];
	    
int rec(int i, int c, int n){
    
    if(i == n) return 1;
    
    if(i > n) return 0;
    
    if(dp[i][c] != -1) return dp[i][c];
    
    int c1 = 0;
    
    if(c == 0){
        c1 = rec(i + 1, 0, n);
    }
    
    int c2 = rec(i + 2, 1, n);
    
    return dp[i][c] = c1 + c2;
    
}

int nthStair(int n){
    //  Code here
    
    memset(dp,-1, sizeof(dp));
    
    return rec(0, 0, n);
    
}