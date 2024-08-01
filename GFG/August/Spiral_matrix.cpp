vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
    // code here
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    
    vector<int>ans;
    
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right; i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
        }
        bottom--;
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
        }
        left++;
    }
    return ans;
}