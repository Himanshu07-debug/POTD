vector<int> findSplit(vector<int>& arr) {
    // code here
    
    long long sum = 0, n = arr.size();
    
    for(int x : arr) sum += x;
    
    if(sum%3 != 0) return {-1, -1};
    
    vector<int> ans;
    
    ans.push_back(0);
    
    long long curr = 0, target = sum/3;
    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        
        curr += arr[i];
        
        if(curr == target){
            cnt++;
            curr = 0;
            
            if(ans.size() > 0) continue;
            ans.push_back(i);
        }
        
    }
    
    if(cnt < 3) return {-1, -1};
    
    return ans;
    
}