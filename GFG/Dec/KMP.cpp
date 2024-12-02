vector<int> search(string& pat, string& txt) {
    // code here
    
    vector<int> ans;
    
    string tmp = pat;
    tmp += "$";
    tmp += txt;    
    
    int x = tmp.size();
    
    vector<int> lps(x, 0);
    
    for(int j = 1; j < x; j++){
        
        int i = lps[j - 1];
        
        if(tmp[i] == tmp[j]) lps[j] = i + 1;
        else{
            
            while(i > 0 && tmp[i] != tmp[j]){
                i--;
                i = lps[i];
            }
            
            if(tmp[i] == tmp[j]) lps[j] = i + 1;
            
        }
        
    }
    
    for(int i = 0; i < x; i++){
        
        if(lps[i] == pat.size()) ans.push_back(i - 2*pat.size());
        
    }
    
    return ans;
    
}