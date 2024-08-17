vector<long long int> productExceptSelf(vector<long long int>& nums) {

    // code here
    int n = nums.size();
    
    vector<long long int> pref(n, 1), suff(n, 1);
    
    pref[0] = nums[0];
    suff[n-1] = nums[n-1];
    
    for(int i=1;i<n;i++){
        
        pref[i] = nums[i] * pref[i - 1];
        suff[n-i-1] = nums[n - i - 1] * suff[n-i];
        
    }
    
    vector<long long int> ans(n);
    
    for(int i=0;i<n;i++){
        long long int left = (i > 0) ? pref[i-1] : 1;
        long long int right = (i + 1 < n) ? suff[i+1] : 1;
        
        ans[i] = left * right;
    }
    
    return ans;
}