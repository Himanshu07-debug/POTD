class Solution {
  public:
    void fun(int i,int j,string temp,vector<vector<int>> &mat,vector<string> &ans){
        if(i<0 || j<0 || i>=mat.size() || j>=mat.size() || mat[i][j]==0)
            return;
        
        if(i==mat.size()-1 && j==mat.size()-1){
            ans.push_back(temp);
            return;
            
        }
        
        mat[i][j]=0;
        
        fun(i-1,j,temp+"U",mat,ans);
        fun(i+1,j,temp+"D",mat,ans);
        fun(i,j-1,temp+"L",mat,ans);
        fun(i,j+1,temp+"R",mat,ans);
        
        mat[i][j]=1;
        return;
        
    }
    
    
    
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        if(mat[0][0]==0 || mat[mat.size()-1][mat.size()-1]==0)
            return ans;
        fun(0,0,"",mat,ans);
        return ans;
        
    }


};
