int minJumps(vector<int>& arr) {
    // code here
    int n = arr.size();
    int j = 1, curr = arr[0], mx = arr[0];
    
    for(int i = 1; i < n; i++){
        
        if(i > mx) return -1;
        
        mx = max(mx, i + arr[i]);
        
        if(i >= curr && i < n-1){
            j++;
            curr = mx;
        }
        
    }
    
    return j;
    
}