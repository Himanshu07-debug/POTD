int rowWithMax1s(vector<vector<int> > &arr) {
    int n=arr.size();
    int m=arr[0].size();
    int index;
    int ans=0;
    int cnt;
    
    for(int i=0;i<n;i++)
    {   
        cnt=0;
        int k=m-1;
        while((arr[i][k])&&k>=0)
        {
            cnt++;
            k--;
            
        }
        //if(cnt==m)return i;
        if(cnt>ans)
        {
            ans=cnt;
            index=i;
        }
        
    }
    if(ans==0)return -1;
    return index;
}
