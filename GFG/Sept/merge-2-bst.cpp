class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> ans;
    void inorder(Node* root)
    {
        if(root==NULL)
        return;
        inorder(root->left);
        ans.push_back(root->data);
        inorder(root->right);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        inorder(root1);
        inorder(root2);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};