vector<int> findMajority(vector<int>& nums) {
    // Your code goes here.
    unordered_map<int,int> mp;
    int n = nums.size();
    
    for(int i = 0; i < nums.size(); i++){
        
        if(mp.count(nums[i])) mp[nums[i]]++;
        else{
            if(mp.size() < 3) mp[nums[i]]++;
            else{
                vector<int> del;
                for(auto x : mp){
                    mp[x.first]--;
                    if(mp[x.first] == 0){
                        del.push_back(x.first);
                    }
                }
                
                for(int x : del) mp.erase(x);
            }
        }
        
    }
    
    vector<int> ans;
    
    for(auto x : mp){
        int cnt = 0;
        for(int y : nums){
            if(x.first == y) cnt++;
        }
        if(cnt > n/3) ans.push_back(x.first);
    }
    
    if(ans.size())  sort(ans.begin(), ans.end());
    
    return ans;
    
}