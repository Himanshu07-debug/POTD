 int missingNumber(vector<int> &arr) {
    // Your code here
    
    sort(arr.begin(), arr.end());
    
    int val = 1;
    
    for(int x : arr){
        
        if(x <= 0 || x < val) continue;
        
        if(x > val) break;
        
        if(x == val){ val++; } 
        
    }
    
    if(arr.back() == val) return val + 1;
    
    return val;
    
}