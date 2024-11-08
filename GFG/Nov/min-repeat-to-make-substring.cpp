int minRepeats(string& s1, string& s2) {
        
    // code here
    int t = 1;
    string tmp = s1;
    
    while(tmp.size() < s2.size()){
        
        tmp += s1;
        t++;
    }
    
    if(tmp.find(s2) != string::npos) return t;
    
    tmp += s1;
    
    if(tmp.find(s2) != string::npos) return t + 1;

    return -1;
    
}