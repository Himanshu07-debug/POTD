int hIndex(vector<int>& citations) {
    // code here
    
    int n = citations.size();
    
    sort(citations.begin(), citations.end());
    
    int len = 0;
    
    for(int i = n-1; i >= 0; i--){
        if(citations[i] >= len + 1) len++;
    }
    
    return len;
    
}