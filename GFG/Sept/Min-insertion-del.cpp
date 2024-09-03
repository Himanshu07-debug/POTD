int LCS(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){

    if( i < 0 || j < 0 ) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    if(s1[i] == s2[j]) dp[i][j] = 1 + LCS(i-1, j-1, s1, s2, dp);
    else{
        dp[i][j] = max(LCS(i-1, j, s1, s2, dp) , LCS(i, j-1, s1, s2, dp));
    }

    return dp[i][j];

}

int minOperations(string s1, string s2) 
{ 
    // Your code goes here
    int n = s1.size() , m = s2.size();

    vector<vector<int>> dp(n, vector<int> (m , -1) );

    int len = LCS(n-1, m-1, s1, s2, dp);

    return (m - len) + (n - len);
    
} 