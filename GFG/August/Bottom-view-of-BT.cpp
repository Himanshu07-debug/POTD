vector <int> bottomView(Node *root) {
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        auto temp=q.front();
        q.pop();
        
        Node *front=temp.first;
        int hd=temp.second;
        mp[hd]=front->data;
        
        if(front->left) q.push(make_pair(front->left,hd-1));
        
        if(front->right) q.push(make_pair(front->right,hd+1));
    }
    
    for(auto i:mp){                              
        ans.push_back(i.second);
    }
    return ans;
}