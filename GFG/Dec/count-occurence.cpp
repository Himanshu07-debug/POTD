int countFreq(vector<int>& arr, int target) {
        
    // code here
    int cnt = 0;
    
    for(int x : arr){
        if(x == target) cnt++;
    }
    
    return cnt;
    
}