bool checkDuplicatesWithinK(vector<int>& arr, int k) {
    // your code
    unordered_map<int,int> mp;
    
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        
        if(mp.count(arr[i]) && (i - mp[arr[i]] <= k)) return true;
        
        mp[arr[i]] = i;
        
    }
    
    return false;
}