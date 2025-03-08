string longestPalindrome(string &s) {
    string str="";
    int n=s.length();
    
    for(int i=0;i<n;i++){
        
        int left=i, right=i;

        while(left>=0 && s[left]==s[i])left--;
        while(right<n && s[right]==s[i])right++;
        
        while(left>=0 && right<n && s[left]==s[right]){
            left--;
            right++;
        }
        
        string candidate = s.substr(left+1, right-left-1);
        if(candidate.length()>str.length()){
            str=candidate;
        }
    }
    return str;
}