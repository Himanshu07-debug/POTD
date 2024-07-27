int dp[501][501];
    
int rec(int i, int j, string str){
    
    if(i > j) return 0;
    
    if(i == j) return 1;
    
    if(dp[i][j] != -1) return dp[i][j];
    
    if(str[i] == str[j]) return dp[i][j] = 2 + rec(i+1, j-1, str);
    else{
        return dp[i][j] = max(rec(i+1, j, str), rec(i, j-1, str));
    }
    
}

int countMin(string str){
//complete the function here
    memset(dp, -1, sizeof(dp));
    
    int n = str.size();
    
    return n - rec(0, n-1, str);
}