int sameOccurrence(vector<int>& arr, int x, int y) {
    // code here
    
    map<int,int> mp;
    
    mp[0] = 1;
    
    int d = 0, ans = 0;
    
    for(int z : arr){
        if(z == x) d++;
        else if(z == y) d--;
        
        ans += mp[d];
        mp[d]++;
    }
    
    return ans;
    
}