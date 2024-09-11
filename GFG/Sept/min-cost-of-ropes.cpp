long long minCost(vector<long long>& arr) {
    // Your code here
    
    // int n = arr.size();
    
    // if(n == 1) return arr[0];
        
    priority_queue<long long> pq;
    
    for(long long x : arr)   pq.push(-x);
    
    long long ans = 0;
    
    while(pq.size() > 1){
    
        long long a = -pq.top();
        pq.pop();
        
        long long b = -pq.top();
        pq.pop();
        
        ans += (a + b);
        
        pq.push(-(a + b));
        
    }
    
    return ans;
    
}