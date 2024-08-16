int dp[10003];
    
int rec(int i, int n, int x, int y, int z){
    
    if(i == n) return 0;
    
    if(i > n) return -1e9;
    
    if(dp[i] != -1) return dp[i];
    
    int c1 = 1 + rec(i + x, n, x, y, z);
    
    int c2 = 1 + rec(i + y, n, x, y, z);
    
    int c3 = 1 + rec(i + z, n, x, y, z);
    
    return dp[i] = max({c1, c2, c3});
    
}

int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    memset(dp, -1, sizeof(dp));
    
    int ans = rec(0, n, x, y, z);
    
    if(ans < 0) return 0;
    else return ans;
}