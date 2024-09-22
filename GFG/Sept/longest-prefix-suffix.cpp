int lps(string str) {
    // Your code goes here
    
    int n = str.size();
    
    vector<int> ans(n, 0);
    
    int i = 1;
    
    while(i < n){
        
        int j = ans[i - 1];
        
        if(str[i] == str[j]){
            ans[i] = j + 1;
        }
        else{
                
            while(j > 0 && str[j] != str[i]){
                j--;
                j = ans[j];
            }
            
            if(str[i] == str[j]){
                ans[i] = j + 1;
            }
            
        }
        
        i++;
        
    }
    
    return ans[n-1];
    
}