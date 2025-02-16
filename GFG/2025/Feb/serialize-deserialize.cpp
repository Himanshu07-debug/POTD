void rec(Node* root, vector<int> &ans){
        
    if(!root){
        ans.push_back(-1);
        return;
    }
    
    ans.push_back(root -> data);
    
    rec(root -> left, ans);
    rec(root -> right, ans);
    
}

// Function to serialize a tree and return a list containing nodes of tree.
vector<int> serialize(Node *root) {
    // Your code here
    vector<int> ans;
    
    rec(root, ans);
    
    return ans;
}

Node* fun(vector<int> &arr, int &i){
    
    if(i >= arr.size()) return NULL;
    
    if(arr[i] == -1){
        i++;
        return NULL;
    }
    
    Node* root = new Node(arr[i]);
    i++;
    
    root -> left = fun(arr, i);
    root -> right = fun(arr, i);
    
    return root;
}

// Function to deserialize a list and construct the tree.
Node *deSerialize(vector<int> &arr) {
    // Your code here
    
    int i = 0;
    
    Node* root = fun(arr, i);
    
    return root;
    
}