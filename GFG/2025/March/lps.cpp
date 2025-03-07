vector<vector<int>>dp;
int fun(int i,string &s,int j,string &S){
    if(i==-1 || j== (int)S.size()) return 0;
    return dp[i][j] = dp[i][j]!=-1 ? dp[i][j] : s[i]==S[j] ? 1+fun(i-1,s,j+1,S) : max(fun(i-1,s,j,S),fun(i,s,j+1,S));
}
int longestPalinSubseq(string &s) {
    dp.assign(s.size(),vector<int>(s.size(),-1));
    return fun(s.size()-1,s,0,s);
}