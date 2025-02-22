int maxLength(string& s) {
    // code here
    int n = s.size();
    
    vector<int> open;
    int c = 0, o = 0, ans1 = 0, ans2 = 0;

    for(int i = 0; i < n; i++){

        if(s[i] == '(') o++;
        else{
            c++;
            
            if(o == c) ans1 = max(ans1, 2*o);
            if(c > o) o = c = 0; 
        }

    }
    
    o = c = 0;

    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '('){
            o++;
            
            if(o == c) ans2 = max(ans2, 2*o);
            if(o > c) o = c = 0;
        }
        else c++;
    }
    
    return max(ans1, ans2);
}