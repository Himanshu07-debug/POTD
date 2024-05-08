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

// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

void dfs(node* root, vector<int> &path, vector<vector<int>> &ans){

    path.push_back(root -> data);

    if(root -> left == NULL && root -> right == NULL) ans.push_back(path);
    else{

        if(root -> left != NULL) dfs(root->left, path, ans);
        if(root -> right != NULL) dfs(root -> right, path, ans);

    }

    path.pop_back();

}

 vector<vector<int>> Paths(node* root) {

    vector<vector<int>> ans;

    vector<int> path;

    dfs(root, path, ans);

    return ans;
        
}

