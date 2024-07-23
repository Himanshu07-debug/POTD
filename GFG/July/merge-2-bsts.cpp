 void inorder(Node* root, vector<int> &tmp){
        
    if(root == NULL) return;
    
    inorder(root->left, tmp);
    
    tmp.push_back(root -> data);
    
    inorder(root->right, tmp);
    
}

vector<int> merge(Node *root1, Node *root2) {
    // Your code here
    vector<int> first;
    
    vector<int> second;
    
    inorder(root1, first);
    
    inorder(root2, second);
    
    int n = first.size(), m = second.size();
    
    vector<int> ans;
    
    int i= 0, j = 0;
    while(i < n && j < m){
        
        if(first[i] <= second[j]){
            ans.push_back(first[i]);
            i++;
        }
        else{
            ans.push_back(second[j]);
            j++;
        }
        
    }
    
    while(i < n){
        ans.push_back(first[i]);
            i++;
    }
    
    while(j < m){
        ans.push_back(second[j]);
            j++;
    }
    
    return ans;
}