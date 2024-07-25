Node* BST(vector<int>&nums,int i,int j){
    if(i>j)
        return NULL;
    int mid=(i+j)/2;
    Node* root= new Node(nums[mid]);
    root->left=BST(nums,i,mid-1);
    root->right=BST(nums,mid+1,j);
    
    return root;
}

Node* sortedArrayToBST(vector<int>& nums) {
    return BST(nums,0,nums.size()-1);
}