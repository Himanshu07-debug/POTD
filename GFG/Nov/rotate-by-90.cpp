void rotate(vector<vector<int> >& mat) {

    if(mat.size() == 1){
        return;
    }
    
    
    for(int i = 0; i < mat.size()/2; i++){
        swap(mat[i],mat[mat.size()-i-1]);
    }
    
    
    for(int i = 0; i < mat.size(); i++){
        for(int j = i+1; j < mat[0].size(); j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}