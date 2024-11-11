int minIncrements(vector<int>& arr) {
    // Code here
    sort(arr.begin(), arr.end());
    
    int ans = 0, n = arr.size();
    
    for(int i = 1; i < n; i++){
        
        if(arr[i - 1] >= arr[i]){
            int prev = arr[i];
            arr[i] = arr[i - 1] + 1;
            ans += (arr[i] - prev);
        }
        
    }
    
    return ans;
}