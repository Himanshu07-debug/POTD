void nearlySorted(vector<int>& arr, int k) {
    // code
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.begin() + k);
    
    int indx = 0, n = arr.size();
    
    for(int i = k; i < n; i++){
        
        pq.push(arr[i]);
        
        arr[indx] = pq.top();
        pq.pop();
        
        indx++;
        
        
    }
    
    while(indx < n){
        arr[indx] = pq.top();
        pq.pop();
        indx++;
    }
    
}