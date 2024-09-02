int minimumCostPath(vector<vector<int>>& grid) 
{
    // Code here
    
    int n = grid.size();
    
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
    
    vector<pair<int,int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    
    vector<vector<int>> dist(n, vector<int>(n, 1e9));
    
    dist[0][0] = grid[0][0];
    pq.push({dist[0][0], {0, 0}});
    
    while(pq.size()){
        
        int cost = pq.top().first;
        int i = pq.top().second.first, j = pq.top().second.second;
        
        pq.pop();
        
        if(i == n-1 && j == n-1) return cost;
        
        for(auto z : dir){
            
            int x = i + z.first;
            int y = j + z.second;
            
            if(x >= 0 && y >= 0 && x < n && y < n){
                
                if(dist[x][y] > cost + grid[x][y]){
                    dist[x][y] = cost + grid[x][y];
                    pq.push({dist[x][y], {x, y}});
                }
                
            }
            
        }
        
    }
    
    return dist[n-1][n-1];
    
}