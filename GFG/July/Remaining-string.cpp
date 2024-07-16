string printString(string s, char ch, int count) {
    
    // Your code goes here
    string res = "";
    
    int cnt = 0;
    
    for(char c : s){
        
        if(c == ch && cnt < count) cnt++;
        else if(cnt == count){
            res.push_back(c);
        }
        
    }
    
    return res;
}