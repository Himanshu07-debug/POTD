int editDistance(string& s1, string& s2) {
    // code here
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0)
                dp[i][j] = j; 
            else if (j == 0)
                dp[i][j] = i; 
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1]; 
            else
                dp[i][j] = 1 + min({dp[i - 1][j],     
                                    dp[i][j - 1],     
                                    dp[i - 1][j - 1]}); 
        }
    }
    return dp[n][m];
}