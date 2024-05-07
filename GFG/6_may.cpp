#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1; 
const long long NINF = LLONG_MIN;

struct node{

    int data;
    node* left;
    node* right;

    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }

};

vector<int> noSibling(node* root)
{
    // code here
    vector<int> ans;
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()) {
        node* root = q.front();
        q.pop();
        
        if(root->left && !root->right) {
            ans.push_back(root->left->data);
            q.push(root->left);
        }
        
        if(!root->left && root->right) {
            ans.push_back(root->right->data);
            q.push(root->right);
        }
        
        if(root->left && root->right) {
            q.push(root->left);
            q.push(root->right);
        }
    }
    
    if(ans.empty())
        return {-1};
    
    sort(ans.begin(), ans.end());
    return ans;
}