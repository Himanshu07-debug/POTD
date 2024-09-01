unordered_map<int, int> mp1;
    unordered_map<int,int> mp2;
    
    int dp[10005][2];
    
    int rec(int i, int c, int n, int m, vector<int> &arr1, vector<int> &arr2){
        
        if(c == 0 && i >= n) return 0;
        
        if(c == 1 && i >= m) return 0;
        
        if(dp[i][c] != -1) return dp[i][c];
        
        int ans = 0;
        
        if(c == 0){
            
            if(mp2.count(arr1[i])){
                int indx = mp2[arr1[i]];
                
                int change = arr1[i] + rec(indx + 1, !c, n, m, arr1, arr2);
                int not_change = arr1[i] + rec(i+1, c, n, m, arr1, arr2);
                
                ans = max(change, not_change);
                
            }
            else{
                ans = arr1[i] + rec(i+1, c, n, m, arr1, arr2);
            }
            
        }
        else{
            
            if(mp1.count(arr2[i])){
                int indx = mp1[arr2[i]];
                
                int change = arr2[i] + rec(indx + 1, !c, n, m, arr1, arr2);
                int not_change = arr2[i] + rec(i+1, c, n, m, arr1, arr2);
                
                ans = max(change, not_change);
                
            }
            else{
                ans = arr2[i] + rec(i+1, c, n, m, arr1, arr2);
            }
            
        }
        
        return dp[i][c] = ans;
        
    }
  
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        
        memset(dp, -1, sizeof(dp));
        
        int n = arr1.size(), m = arr2.size();
        
        for(int i=0;i<n;i++) mp1[arr1[i]] = i;
        
        for(int i=0;i<m;i++) mp2[arr2[i]] = i;
        
        return max(rec(0, 0, n, m, arr1, arr2), rec(0, 1, n, m, arr1, arr2));
        
        
    }