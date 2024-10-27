bool findTriplet(vector<int>& arr) {
    // Your code
    
    sort(arr.begin(), arr.end());
    
    int n = arr.size();
    
    for(int i = n-1; i >= 2; i--){
        
        int x = arr[i];
        
        int l = 0, r = i - 1;
        
        while(l < r){
            
            int sum = arr[l] + arr[r];
            
            if(sum == x) return true;
            else if(sum < x) l++;
            else r--;
            
        }
        
    }
    
    return false;
    
}