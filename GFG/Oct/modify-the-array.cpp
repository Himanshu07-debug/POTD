 vector<int> modifyAndRearrangeArray(vector<int> &arr) {
    // Complete the function
    int n = arr.size();
    
    for(int i = 1; i < n; i++){
        
        if(arr[i] == arr[i - 1]){
            arr[i - 1] = arr[i]*2;
            arr[i] = 0;
        }
        
    }
    
    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] != 0){
            swap(arr[i], arr[cnt]);
            cnt++;
        }
        
    }
    
    return arr;
    
}