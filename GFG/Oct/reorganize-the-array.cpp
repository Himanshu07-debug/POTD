vector<int> rearrange(const vector<int>& arr) {
    // Code here
    
    int n = arr.size();
    vector<int> cnt(n, 0);
    
    for(int x : arr){
        if(x < n && x >= 0) cnt[x]++;
    }
    
    vector<int> ans(n, -1);
    
    for(int i = 0; i < n; i++){
        if(cnt[i]){
            ans[i] = i;
        }
    }
    
    return ans;
}