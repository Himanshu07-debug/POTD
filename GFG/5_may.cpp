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

class Solution{
  public:
    vector <int> verticalSum(node *root) {
        // add code here.
        map<int,int>mp;
        queue<pair<node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int p=q.front().second;
            node * r=q.front().first;
            mp[p]+=r->data;
            q.pop();
            if(r->left){
                q.push({r->left,p-1});
            }
            if(r->right){
                q.push({r->right,p+1});
            }
        }
        vector<int>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};