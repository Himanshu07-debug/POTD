int countPS(string &s) {
    unordered_map<int,int>m;
    int n=s.size();
    int c=0;
    for(int i=0;i<n;i++)
    {
        int l=i,r=i;
        while(l>=0 and r<n and s[l]==s[r])
        {
            if(r-l+1>=2)
            {
               if(m.find(l)!=m.end() and m[l]!=r)c++;
               else m[l]=r;
            }
            l--;
            r++;
        }
        l=i,r=i+1;
        while(l>=0 and r<n and s[l]==s[r])
        {
            if(r-l+1>=2)
            {
                 if(m.find(l)!=m.end() and m[l]!=r)c++;
                 else
                 m[l]=r;
            }
            l--;r++;
        }
        
    }
    return c+m.size();


 }