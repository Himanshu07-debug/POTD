void rec(Node* root, int &ans, int &curr){
        
    if(root == NULL) return;
    
    if(root -> left == NULL && root -> right == NULL){
        curr += root -> data;
        ans += curr;
        curr -= root -> data;
    }
    
    curr += root->data;
    curr *= 10;
    
    rec(root -> left, ans, curr);
    
    rec(root -> right, ans, curr);
    
    curr /= 10;
    curr -= root -> data;
    
}

int treePathsSum(Node *root) {
    // code here.
    int ans = 0, curr = 0;
    
    rec(root, ans, curr);
    
    return ans;
    
}