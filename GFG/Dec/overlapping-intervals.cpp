vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
    // Code here
    
    sort(arr.begin(), arr.end());
    
    int n = arr.size();
    vector<vector<int>> ans;
    
    ans.push_back(arr[0]);
    
    for(int i = 1; i < n; i++){
        
        vector<int> t = ans.back();
        
        if(arr[i][0] <= t[1]){
            ans.back()[0] = min(t[0], arr[i][0]);
            ans.back()[1] = max(t[1], arr[i][1]);
        }
        else{
            ans.push_back(arr[i]);
        }
        
    }
    
    return ans;
    
}