void rec(Node* root, int level, vector<int> &res){
    
    if(root == NULL) return;
    
    if(level > res.size()){
        res.push_back(root -> data);
    }
    
    rec(root -> left, level + 1, res);
    rec(root -> right, level + 1, res);
    
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   
   rec(root, 1, res);
   
   return res;
   
}