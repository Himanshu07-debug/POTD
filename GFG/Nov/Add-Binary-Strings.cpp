string addBinary(string& s1, string& s2) {

    int i = s1.size()-1 , j = s2.size()-1 ; 
    int c = 0 ;
    string ans="" ;
    
    while(i>=0&&j>=0)
    {
        int a = s1[i]-'0' , b = s2[j]-'0' ;
        ans+= to_string(a^b^c) ;
        c = a&b|b&c|c&a ;
        i--;
        j--;
    }
    
    while(i>=0)
    {
        int a = s1[i]-'0' ;
        ans+=to_string(a^c) ;
        c = a&c ;
        i-- ;
    }
    
    while(j>=0)
    {
        int b = s2[j]-'0' ;
        ans+=to_string(b^c) ;
        c = b&c ;
        j-- ;
    }
    if(c)
        ans+='1' ;
    while(ans.size()&&ans[ans.size()-1]=='0')
        ans.pop_back() ;
    reverse(ans.begin(),ans.end()) ;
    return ans ;
}