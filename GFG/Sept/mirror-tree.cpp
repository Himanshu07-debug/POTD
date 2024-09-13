Node* rec(Node* root){
    
    if(!root) return NULL;
    
    Node* l = rec(root -> left);
    Node* r = rec(root -> right);
    
    root -> left = r;
    root -> right = l;
    
    return root;
    
}

void mirror(Node* node) {
    // code here
    Node* tmp = rec(node);

}