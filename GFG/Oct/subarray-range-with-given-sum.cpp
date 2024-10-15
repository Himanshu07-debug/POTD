int subArraySum(vector<int>& arr, int tar) {
    // Your code here
    
    unordered_map<int,int> mp;
    
    mp[0] = 1;
    int sum = 0, ans = 0;
    
    for(int i = 0; i < arr.size(); i++){
        
        sum += arr[i];
        
        if(mp.find(sum - tar) != mp.end()){
            ans += mp[sum - tar];
        }
        
        mp[sum]++;
        
    }
    
    return ans;
}