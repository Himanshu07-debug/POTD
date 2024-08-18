bool canSplit(vector<int>& arr) {
    // code here
    int rsum = 0;
    
    for(int x : arr){
        rsum += x;
    }
    
    int lsum = 0;
    for(int x : arr){
        lsum += x;
        rsum -= x;
        if(lsum == rsum) return true;
    }
    
    return false;
}