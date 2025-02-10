void solve(Node *root,int k,map<int,int>& mp,int &count,int &sum){
    if (root==NULL) return ;
    
    sum=sum+root->data;
    if (mp.find(sum-k)!=mp.end()){
        count=count+mp[sum-k];
    }
    mp[sum]++;
    solve(root->left,k,mp,count,sum);
    solve(root->right,k,mp,count,sum);
    mp[sum]--;
    sum=sum-root->data;
    
}

int sumK(Node *root,int k)
{
    // code here 
    int count=0;
    map<int,int> mp;
    mp[0]=1;
    int sum=0;
    solve(root,k,mp,count,sum);
    return count;
}