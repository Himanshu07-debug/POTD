void dfs(int i, vector<int> &vis, vector<int> gr[]){
        
    vis[i] = 1;
    
    for(int x : gr[i]){
        if(vis[x] == 0){
            dfs(x, vis, gr);
        }
    }
    
}


int isCircle(vector<string> &arr) {
    // code here
    vector<int> gr[26];
    
    vector<int> in(26, 0), out(26, 0);
    
    for(auto x : arr){
        
        int y = x.size();
        gr[x[0] - 'a'].push_back(x[y-1] - 'a');
        in[x[y-1] - 'a']++;
        out[x[0] - 'a']++;
        
    }
    
    for(int i=0;i<26;i++){
        if(in[i] != 0 && in[i] != out[i]) return 0;
    }
    
    vector<int> vis(26, 0);
    int cnt = 0;
    
    for(int i=0;i<26;i++){
        
        if(in[i] > 0 && vis[i] == 0){
            dfs(i, vis, gr);
            cnt++;
        }
        
    }
    
    return (cnt == 1);
}