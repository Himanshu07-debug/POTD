string smallestWindow (string s, string p)
{
    // Your code here
    int cnt1[26] = {0};
    int cnt2[26] = {0};
    
    for(char c : p) cnt2[c - 'a']++;
    
    int n = s.size();
    
    int i = 0, j = 0;
    int cnt = 0;
    
    int res = 1e9, st = -1;
    
    while(j < n){
        
        int x = s[j] - 'a';
        
        cnt1[x]++;
        
        if(cnt2[x] > 0  && cnt2[x] >= cnt1[x]){
            cnt++;
        }
        
        while(i <= j && cnt == p.size()){
            
            if(j - i + 1 < res){
                res = j - i + 1;
                st = i;
            }
            
            if(cnt2[s[i] - 'a'] && cnt1[s[i] - 'a'] == cnt2[s[i] - 'a']) cnt--;
            
            cnt1[s[i] - 'a']--;
            
            i++;
            
        }
        
        j++;
        
    }
    
    if(st == -1) return string("-1");
    
    return s.substr(st, res);
    
}