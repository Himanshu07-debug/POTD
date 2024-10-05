long long findSmallest(vector<int> &arr) {
    // Your code goes here.
    
    long long res = 1;
    
    int n = arr.size();
    
    for(int x : arr){
        
        if(x > res) break;
        
        res += x;
        
    }
    
    return res;
    
}