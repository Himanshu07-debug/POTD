int countPairsWithDiffK(vector<int>& arr, int k) {
    // code here
    unordered_map<int,int> mp;
    
    sort(arr.begin(), arr.end());
    
    int res = 0;
    
    for(int x : arr){
        
        res += mp[x - k];
        
        mp[x]++;
        
    }
    
    return res;
}