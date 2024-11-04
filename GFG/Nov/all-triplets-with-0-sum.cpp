vector<vector<int>> findTriplets(vector<int> &arr) {
    // Code here
    vector<vector<int>> ans;
    
    vector<pair<int,int>> tmp;
    
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        tmp.push_back(make_pair(arr[i], i));
    }
    
    sort(tmp.begin(), tmp.end());
    
    for(int i = 0; i <= n - 3; i++){
        
        int l = i + 1, r = n - 1;
        
        while(l < r){
            
            int val = tmp[i].first + tmp[l].first + tmp[r].first;
            
            if(val == 0){
                ans.push_back({tmp[i].second, tmp[l].second, tmp[r].second});
                
                while(l + 1 < r && tmp[l+1].first == tmp[l].first){
                    ans.push_back({tmp[i].second, tmp[l+1].second, tmp[r].second});
                    l++;
                }
                
                while(r - 1 > l && tmp[r].first == tmp[r - 1].first){
                    ans.push_back({tmp[i].second, tmp[l].second, tmp[r-1].second});
                    r--;
                }
                
                l++;
                r--;
                
            }
            else if(val < 0) l++;
            else r--;
            
        }
        
    }
    
    for(auto &v : ans){
        sort(v.begin(), v.end());
    }
    
    return ans;
}