int countgroup(vector<int>& arr) {
    // Complete the function
    
    int x = 0, n = arr.size();
    for(int y : arr) x ^= y;
    
    if(x == 0){
        return (int)(pow(2, n - 1)) - 1;
    }
    return 0;
}