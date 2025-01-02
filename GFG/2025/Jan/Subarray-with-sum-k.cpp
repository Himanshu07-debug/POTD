int countSubarrays(vector<int> &arr, int k) {
    // code here
    int ans = 0;
    map<int,int>mp;
    int curr = 0;
    mp[0] = 1;
    for(int i=0;i<arr.size();i++){
        curr += arr[i];
        ans += mp[curr-k];
        mp[curr]++;
    }
    return ans;
}