int search(vector<int>& arr, int key) {
    // complete the function here
    
    int n = arr.size();
    int l = 0, h = n - 1;
    
    while(l <= h){
        
        int m = (l + h)/2;
        
        if(arr[m] == key) return m;
        else if(arr[m] >= arr[l]){
            if(key >= arr[l] && key <= arr[m]) h = m - 1;
            else l = m + 1;
        }
        else{
            if(key <= arr[h] && key >= arr[m]) l = m + 1;
            else h = m - 1;
        }
        
    }
    
    return -1;
    
}