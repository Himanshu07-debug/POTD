 int pairsum(vector<int> &arr) {
    // code here
    
    int f = 0, s = -1;
    
    int n = arr.size();
    
    for(int i = 1; i < n; i++){
        
        if(arr[i] > arr[f]){
            s = f;
            f = i;
        }
        else if(s == -1 || arr[s] < arr[i]){
            s = i;
        }
        
    }
    
    return arr[f] + arr[s];
    
}