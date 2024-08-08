int rec(Node* root){
    
    if(root == NULL) return 0;
    
    if(root -> left == NULL && root -> right == NULL) return root -> data;
    
    int lh = rec(root -> left);
    
    if(lh == -1) return -1;
    
    int rh = rec(root -> right);
    
    if(rh == -1) return -1;
    
    if(root -> data != (lh + rh)) return -1;
    
    return (root -> data + lh + rh);
    
}

bool isSumTree(Node* root) {
    // Your code here
    
    if(rec(root) == -1) return false;
    
    return true;
    
}
