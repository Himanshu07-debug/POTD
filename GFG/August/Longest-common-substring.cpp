
int longestCommonSubstr(string str1, string str2) {
        // your code here
        int n=str1.size(),m=str2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        // Draw the table and solve the LCS problem , you will understand
        
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        
        return ans;
    }

