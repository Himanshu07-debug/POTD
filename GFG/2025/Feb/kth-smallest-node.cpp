void rec(Node* root, int k, int &x, int &indx){
        
    if(!root) return;
    
    rec(root -> left, k, x, indx);
    
    if(indx == k){
        x = root -> data;
    }
    
    indx++;
    
    rec(root -> right, k, x, indx);
    
}

int kthSmallest(Node *root, int k) {
    // add code here.
    
    int x = -1, indx = 1;
    
    rec(root, k, x, indx);
    
    return x;
    
}