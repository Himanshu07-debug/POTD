int kthMissing(vector<int> &arr, int k) {
    // Your code goes here
    
    int y = 1;
    
    for(int x : arr){
        
        if(x == y){
            y++;
        }
        else{
            int miss = x - y;
            
            if(miss >= k) return y + k - 1;
            else k -= miss;
            
            y = x + 1;
        }
        
    }
    
    return y + k - 1;
    
}