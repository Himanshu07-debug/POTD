 vector<int> alternateSort(vector<int>& arr) {
    // Your code goes here
    
    vector<int> tmp(arr.begin(), arr.end());
    
    sort(tmp.begin(), tmp.end());
    
    int l = 0, r = arr.size() - 1;
    
    int i = 0;
    
    while(l < r){
        
        arr[i] = tmp[r];
        
        arr[i + 1] = tmp[l];
        
        i += 2;
        l++;
        r--;
        
    }
    
    if(l == r) arr[i] = tmp[l];
    
    return arr;
    
}