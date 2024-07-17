Node *createTree(vector<int> parent) {
    // Your code here
    Node* root = NULL;
    int n = parent.size();
    
    unordered_map<int, Node*> getNode;
    
    for(int i=0;i<n;i++){
        
        if(getNode.count(i) == 0){
            Node* curr = new Node(i);
            getNode[i] = curr;
        }
        
        if(parent[i] != -1 && getNode.count(parent[i]) == 0){
            Node* curr = new Node(parent[i]);
            getNode[parent[i]] = curr; 
        } 
        
        if(parent[i] == -1) root = getNode[i];
        else{
            
            if(getNode[parent[i]] -> left == NULL){
                getNode[parent[i]] -> left = getNode[i];
            }
            else{
                getNode[parent[i]] -> right = getNode[i];
            }
            
        }
        
        
    }
    
    return root;
}