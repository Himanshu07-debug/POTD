void solve(int i, int j,vector<vector<char>>&grid, int n, int m){
    grid[i][j] = '2';
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};
    
    for(int k=0;k<8;k++){
        int nx = i+dx[k];
        int ny = j+dy[k];
        if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny] == '1' ){
            solve(nx,ny,grid,n,m);
        }
    }
}


int numIslands(vector<vector<char>>& grid) {

    // Code here
    int n = grid.size();
    int m = grid[0].size();

    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(grid[i][j] == '1'){
                count++;
                solve(i,j,grid,n,m);
            }

        }
    }

    return count;
    
}

