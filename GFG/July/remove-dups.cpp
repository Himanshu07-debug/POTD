string removeDups(string str) {
        // Your code goes here
        vector<bool>a(26,false);
        string ans="";
        for(int i=0;i<str.size();i++)
        {
            if(a[str[i]-'a']==false)
            {
                ans+=str[i];
                a[str[i]-'a']=true;
            }
        }
        return ans;
    }