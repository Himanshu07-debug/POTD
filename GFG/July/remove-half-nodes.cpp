class Solution {
  public:
  
    Node* postOrder(Node* root){
        
        if(root == NULL) return NULL;
        
        root -> left = postOrder(root -> left);
        root -> right = postOrder(root -> right);
        
        if(root -> left == NULL && root -> right == NULL) return root;
        
        if(root -> left == NULL){
            return root -> right;
        }
        
        if(root -> right == NULL) return root -> left;
        
        return root;
        
    }
  
    Node *RemoveHalfNodes(Node *root) {
        // code here
        return postOrder(root);
    }
};