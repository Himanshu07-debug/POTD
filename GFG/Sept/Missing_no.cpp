int missingNumber(int n, vector<int>& arr) {

    // Your code goes here
    int y = 0;
    
    for(int i=1;i<=n;i++) y ^= i;
    
    for(int x : arr) y ^= x;
    
    return y;
}