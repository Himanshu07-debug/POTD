 int celebrity(vector<vector<int> >& mat) {
    // code here
    int row=mat.size();
    int col=mat[0].size();
    int ans=-1;
    for(int i=0;i<col;i++)
    {
        int cnt=0;
        for(int j=0;j<row;j++)
        {
            if(mat[j][i]==1 && mat[i][j]==0)
                cnt++;
            if(cnt==col-1)
                ans=i;
        }
    }
    return ans;
}