char nonRepeatingChar(string &s) {
    // Your code here
    
    int cnt[26] = {0};
    
    for(char &c : s){
        cnt[c - 'a']++;
    }
    
    int n = s.size();
    
    for(int i = 0; i < n; i++){
        if(cnt[s[i] - 'a'] == 1) return s[i];
    }
    
    return '$';
}