void bfs(int i, int j, int n, int m, int dr[], int dc[],
    vector<vector<char>>& grid, vector<vector<bool>>& vis){
        vis[i][j]=1;
        queue<pair<int, int>>q;
        q.push({i, j});
        
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0; i<8; i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='L' 
                && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    q.push({nr, nc});
                }
            }
        }
    }
  
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n, vector<bool>(m, 0));
        int dr[]={-1, 0, 1, 0, -1, 1, 1, -1};
        int dc[]={0, 1, 0, -1, 1, 1, -1, -1};
        
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]==0 && grid[i][j]=='L'){
                    cnt++;
                    bfs(i, j, n, m, dr, dc, grid, vis);
                }
            }
        }
        return cnt;
    }