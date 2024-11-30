bool areAnagrams(string& s1, string& s2) {
    vector<int>alph(26 , 0); 
    
    for(char ch : s1) alph[ch - 'a']++;
    
    for(char ch : s2) alph[ch - 'a']--;
    
    for(int i : alph) if(i != 0) return 0;
    
    return 1;
}